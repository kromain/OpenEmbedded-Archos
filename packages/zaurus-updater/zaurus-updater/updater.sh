#!/bin/sh

#
# One updater.sh to rule them all
#
# 2006.10.24 Marcin 'Hrw' Juszkiewicz
# - started work on common updater.sh
# - works on poodle, c760, spitz
# - breaks on tosa
#
# 2007.10.08 Marcin 'Hrw' Juszkiewicz
# - do not allow to flash files bigger then partition size
# - created functions for common stuff
#
# 2007.11.18 Dmitry 'Lumag' Baryshkov
# - fixes
# - tosa unbreak
#
# 2007.11.19 Marcin 'Hrw' Juszkiewicz
# - size check unbreak
# - c760/c860 has bigger rootfs - use it
#

date_log() 
{
	echo "$LOG: `date`"
}
LOG="updater start"; date_log

DATAPATH=$1
TMPPATH=/tmp/update
TMPDATA=$TMPPATH/tmpdata.bin
TMPHEAD=$TMPPATH/tmphead.bin

FLASHED_KERNEL=0
FLASHED_ROOTFS=0
UNPACKED_ROOTFS=0   # spitz only

RO_MTD_LINE=`cat /proc/mtd | grep "root" | tail -n 1`
if [ "$RO_MTD_LINE" = "" ]; then
    RO_MTD_LINE=`cat /proc/mtd | grep "\<NAND\>.*\<2\>" | tail -n 1`
fi
RO_MTD_NO=`echo $RO_MTD_LINE | cut -d: -f1 | cut -dd -f2`
RO_MTD_SIZE_HEX=`echo $RO_MTD_LINE | cut -d" " -f2`
RO_MTD=/dev/mtd$RO_MTD_NO

echo "RO_MTD = $RO_MTD"

LOGOCAL_MTD=/dev/mtd1

VERBLOCK=0x48000
MVRBLOCK=0x70000

RESULT=0

Cleanup()
{
    rm -f $VTMPNAME > /dev/null 2>&1
    rm -f $MTMPNAME > /dev/null 2>&1
    exit $1
}

trap 'Cleanup 1' 1 15
trap '' 2 3

get_dev_pcmcia()
{
    while read SOCKET CLASS DRIVER INSTANCE DEVS MAJOR MINOR;
    do
        echo $DEVS
    done
}

get_dev_pcmcia_slot()
{
    grep "^$1" /var/lib/pcmcia/stab | get_dev_pcmcia
}

check_for_hdd()
{
    IDE1=`get_dev_pcmcia_slot 1`
    if [ "$IDE1" = "" ]; then
        echo "Error!! There is no microdrive. Retrying..."
        while [ "$IDE1" = "" ]; do
            IDE1=`get_dev_pcmcia_slot 1`
        done
        echo "Microdrive found."
    fi

    LINUXFMT=ext3
    MKE2FSOPT=-j
}

check_for_tar()
{
    ### Check that we have a valid tar
    for TARNAME in gnu-tar GNU-TAR
    do
        if [ -e $DATAPATH/$TARNAME ]
        then
            TARBIN=$DATAPATH/$TARNAME
        fi
    done

    if [ ! -e $TARBIN ]; then
        echo 'ERRROR: Please place a valid copy of tar as "gnu-tar" on your card.'
        echo 'Please reset'
        while true
        do
        done
    fi
}

do_rootfs_extraction()
{
    UNPACKED_ROOTFS=1
    echo 'HDD root file system'
    if [ ! -f /hdd1/NotAvailable ]; then
        umount /hdd1
    fi
    echo 'Now formatting...'
    mke2fs $MKE2FSOPT /dev/${IDE1}1 > /dev/null 2>&1
    e2fsck -p /dev/${IDE1}1 > /dev/null
    if [ "$?" != "0" ]; then
        echo "ERROR: Unable to create filesystem on microdrive!"
        exit "$?"
    fi

    mount -t $LINUXFMT -o noatime /dev/${IDE1}1 /hdd1
    if [ "$?" != "0" ]; then
        echo "ERROR: Unable to mount microdrive!"
        exit "$?"
    fi

    cd /hdd1
    echo 'Now extracting...'
    gzip -dc $DATAPATH/$TARGETFILE | $TARBIN xf -
    if [ "$?" != "0" ]; then
        echo "ERROR: Unable to extract root filesystem archive!"
        exit "$?"
    fi

    echo 'Done.'

    # remount as RO
    cd /
    umount /hdd1
    mount -t $LINUXFMT -o ro,noatime /dev/${IDE1}1 /hdd1
}

do_flashing()
{
    if [ $DATASIZE -gt `printf "%d" $MTD_PART_SIZE` ]
    then
        echo "ERROR: File is too big to flash!"
        return
    fi

    #check version
    /sbin/bcut -s 6 -o $TMPDATA $TMPHEAD
    if [ `cat $TMPDATA` != "SHARP!" ] > /dev/null 2>&1
    then
        #no version info...
        rm -f $TMPHEAD > /dev/null 2>&1
        DATAPOS=0
    fi

    if [ $ISFORMATTED = 0 ]
    then
		LOG="flash erasing ($TARGET_MTD) start"; date_log
        /sbin/eraseall $TARGET_MTD > /dev/null 2>&1
		LOG="flash erasing ($TARGET_MTD) end"; date_log
        ISFORMATTED=1
    fi

    echo ''
    echo '0%                   100%'
    PROGSTEP=`expr $DATASIZE / $ONESIZE + 1`
    PROGSTEP=`expr 25 / $PROGSTEP`
    if [ $PROGSTEP = 0 ]
    then
        PROGSTEP=1
    fi

    if [ -e $TMPHEAD ]
    then
		LOG="nandlogical read start"; date_log
        VTMPNAME=$TMPPATH'/vtmp'`date '+%s'`'.tmp'
        MTMPNAME=$TMPPATH'/mtmp'`date '+%s'`'.tmp'
        /sbin/nandlogical $LOGOCAL_MTD READ $VERBLOCK 0x4000 $VTMPNAME > /dev/null 2>&1
        /sbin/nandlogical $LOGOCAL_MTD READ $MVRBLOCK 0x4000 $MTMPNAME > /dev/null 2>&1

        /sbin/verchg -v $VTMPNAME $TMPHEAD $MODULEID $MTD_PART_SIZE > /dev/null 2>&1
        /sbin/verchg -m $MTMPNAME $TMPHEAD $MODULEID $MTD_PART_SIZE > /dev/null 2>&1
		LOG="nandlogical read end"; date_log
    fi

	#loop
	while [ $DATAPOS -lt $DATASIZE ]
	do
		#data create
		bcut -a $DATAPOS -s $ONESIZE -o $TMPDATA $TARGETFILE
		TMPSIZE=`wc -c $TMPDATA`
		TMPSIZE=`echo $TMPSIZE | cut -d' ' -f1`
		DATAPOS=`expr $DATAPOS + $TMPSIZE`

		#handle data file
		if [ $ISLOGICAL = 0 ]
		then
			next_addr=`/sbin/nandcp -a $ADDR $TMPDATA $TARGET_MTD  2>/dev/null | fgrep "mtd address" | cut -d- -f2 | cut -d\( -f1`
			if [ "$next_addr" = "" ]; then
				echo "ERROR: flash write"
				rm $TMPDATA > /dev/null 2>&1
				RESULT=3
				break;
			fi
			ADDR=$next_addr
		else
			/sbin/nandlogical $LOGOCAL_MTD WRITE $ADDR $DATASIZE $TMPDATA > /dev/null 2>&1
			ADDR=`expr $ADDR + $TMPSIZE`
		fi

		rm $TMPDATA > /dev/null 2>&1

		#progress
		SPNUM=0
		while [ $SPNUM -lt $PROGSTEP ]
		do
			echo -n '.'
			SPNUM=`expr $SPNUM + 1`
		done
	done

    echo ''

    #finish
    rm -f $TMPPATH/*.bin > /dev/null 2>&1

    if [ $RESULT = 0 ]
    then
        if [ -e $VTMPNAME ]
        then
			LOG="nandlogical write2 start"; date_log
            /sbin/nandlogical $LOGOCAL_MTD WRITE $VERBLOCK 0x4000 $VTMPNAME > /dev/null 2>&1
			LOG="nandlogical write2 end"; date_log
            rm -f $VTMPNAME > /dev/null 2>&1
        fi
        if [ -e $MTMPNAME ]
        then
			LOG="nandlogical write3 start"; date_log
            /sbin/nandlogical $LOGOCAL_MTD WRITE $MVRBLOCK 0x4000 $MTMPNAME > /dev/null 2>&1
			LOG="nandlogical write3 end"; date_log
            rm -f $MTMPNAME > /dev/null 2>&1
        fi
        echo 'Done.'
    else
        echo 'Error!'
    fi
}

### Check model ###
/sbin/writerominfo
MODEL=`cat /proc/deviceinfo/product`
case "$MODEL" in
    SL-B500|SL-5600) 
        ZAURUS='poodle'
        ROOTFS_SIZE=0x1600000
        ;;
    SL-6000)
        ZAURUS='tosa'
        ROOTFS_SIZE=0x1E00000
        ;;
    SL-C1000) 
        ZAURUS='akita'
        ROOTFS_SIZE=0x1900000
        ;;
    SL-C700|SL-C750|SL-7500)
        ZAURUS='c7x0'
        ROOTFS_SIZE=0x1900000
        ;;
    SL-C760|SL-C860)
        ZAURUS='c7x0'
        ROOTFS_SIZE=0x3500000
        ;;
    SL-C3000|SL-C3100|SL-C3200)
        ZAURUS='c3x00'
        ROOTFS_SIZE=0x0500000
        check_for_hdd
        check_for_tar
        ;;
    *)
        echo 'MODEL: '$MODEL 'is unsupported'
        echo ''
        echo 'Please reset'
        while true
        do
        done
        ;;
esac

echo 'MODEL: '$MODEL' ('$ZAURUS')'

mkdir -p $TMPPATH > /dev/null 2>&1

LOG="updater after model"; date_log

cd $DATAPATH/

for TARGETFILE in zimage zImage zImage.bin zimage.bin ZIMAGE ZIMAGE.BIN initrd.bin INITRD.BIN hdimage1.tgz HDIMAGE1.TGZ
do
    if [ ! -e $TARGETFILE ]
    then
        continue
    fi

    rm -f $TMPPATH/*.bin > /dev/null 2>&1
    DATASIZE=`wc -c $TARGETFILE`
    DATASIZE=`echo $DATASIZE | cut -d' ' -f1`

    # make TARGETFILE lowercase
    TARGETFILE=`echo $TARGETFILE|tr A-Z a-z`

    case "$TARGETFILE" in

    zimage|zimage.bin)
        if [ $FLASHED_KERNEL != 0 ]
        then
            continue
        fi
        FLASHED_KERNEL=1
        ISLOGICAL=1
        MODULEID=5
        MTD_PART_SIZE=0x13C000
        ADDR=`dc 0xE0000`
        ISFORMATTED=1
        DATAPOS=0
        ONESIZE=524288
        HDTOP=`expr $DATASIZE - 16`
        /sbin/bcut -a $HDTOP -s 16 -o $TMPHEAD $TARGETFILE
		echo "HDTOP=$HDTOP"
		LOG="updater flashing kernel start"; date_log
		FLASH_TYPE="kernel"
        do_flashing
		FLASH_TYPE=""
		LOG="updater flashing kernel end"; date_log
        ;;

    initrd.bin)
        if [ $FLASHED_ROOTFS != 0 ]
        then
            continue
        fi
        echo 'root file system'
        FLASHED_ROOTFS=1
        ISLOGICAL=0
        MODULEID=6
        MTD_PART_SIZE=$ROOTFS_SIZE
        ADDR=0
        ISFORMATTED=0
        TARGET_MTD=$RO_MTD
        DATAPOS=16
        ONESIZE=1048576
        /sbin/bcut -s 16 -o $TMPHEAD $TARGETFILE
		LOG="updater flashing rootfs start"; date_log
		FLASH_TYPE="rootfs"
        do_flashing
		FLASH_TYPE=""
		LOG="updater flashing rootfs end"; date_log
        ;;

    hdimage1.tgz)
        if [ $UNPACKED_ROOTFS = 0 ]
        then
        do_rootfs_extraction
        fi
        ;;

    *)
        ;;
    esac
done

/bin/sh

# reboot
exit 0

# bcut usage: bcut [OPTION] <input file>

# -a: start position
# -s: cut size
# -o: output file

# ModuleId informations used by verchg Sharp binary:
#
# 0 - master
# 1 - Maintaince
# 2 - Diagnostics
# 3 - rescue kernel
# 4 - rescue rootfs
# 5 - normal kernel
# 6 - normal rootfs
# 7 - /home/
# 8 - parameter (whatever it means)
#