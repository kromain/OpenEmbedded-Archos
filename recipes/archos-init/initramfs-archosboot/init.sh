#!/bin/sh

DATA_PARTITION_PATH="/mnt/data"

NEWROOT_PATH="/new-root"
GET_INFO=/bin/get_info
INSMOD=/sbin/insmod
MOUNT=/bin/mount
UMOUNT="/bin/umount -f "
MKDIR=/bin/mkdir
CAT=/bin/cat
DD=/bin/dd
GREP="/bin/grep -q "

verbose=1

log()
{
	if [ $verbose -ne 0 ]; then
		echo $*
	fi
}

log_and_die()
{
	$UMOUNT /sys
	$UMOUNT /proc
	exit_status=$1
	log $*
	exit $exit_status
}

install_usbhdd()
{
	$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/usb/host/ehci-hcd.ko
	$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/usb/storage/usb-storage.ko delay_use=0
	echo 1 > /sys/devices/system/usbhdd/usbhdd0/hubvcc
	echo 1 > /sys/devices/system/usbhdd/usbhdd0/hddvcc
}

install_usbhsdpa()
{
	echo 0 > /sys/devices/system/hsdpa/hsdpa0/powergpio
	echo 1 > /sys/devices/system/hsdpa/hsdpa0/resetcycle
}

install_sata()
{
	$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/usb/host/ehci-hcd.ko
	$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/usb/storage/usb-storage.ko delay_use=0
	echo 1 > /sys/devices/system/usb2sata/usb2sata0/satavcc
	sleep 1
}

install_ceata()
{
	$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/ata/libata.ko
	$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/ata/ceata_archosg6.ko
	$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/usb/storage/usb-storage.ko delay_use=0
}

dev_setup()
{
	echo -n "Creating device nodes: "
	grep '^ *[0-9]' /proc/partitions | while read major minor blocks dev
	do
		if [ ! -e /dev/$dev ]; then
			echo -n "$dev "
			mknod /dev/$dev b $major $minor
		fi
	done
	for i in 0 1 2 ; do
		if [ ! -e /dev/loop${i} ]; then
			echo -n "loop${i} "
			mknod /dev/loop${i} b 7 ${i}
		fi
	done
	echo
}

# Prepare filesystem
$MOUNT -t proc proc /proc
$MOUNT -t sysfs sysfs /sys

ln -s /proc/mounts /etc/mtab

CMDLINE=`$CAT /proc/cmdline`

for param in $CMDLINE ; do
    case "$param" in
        init=*)
            eval "$param"
            ;;
        debug|verbose)
            verbose=1
            ;;
    esac
done

# Get board and product information
PRODUCT_NAME=`$CAT /proc/cpuinfo | grep "Hardware" | cut -d ' ' -f 3`

log "PRODUCT $PRODUCT_NAME"


# Load necessary modules
$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/usb/core/usbcore.ko
$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/mmc/core/mmc_core.ko
$INSMOD /lib/modules/2.6.22.1-omap1/kernel/drivers/mmc/host/omap_hsmmc.ko

# Start the HDD and the LCD/TVout
if [ "$PRODUCT_NAME" = "G6S" ]; then
	if [ -e /sys/devices/system/usbhdd/usbhdd0/hddvcc ] ; then
		log "start the $PRODUCT_NAME USB HARD DRIVE..."
		install_usbhdd
	else
		log "start the $PRODUCT_NAME CEATA HARD DRIVE..."
		install_ceata
	fi
elif [ "$PRODUCT_NAME" = "G6H" ] || [ "$PRODUCT_NAME" = "G6L" ] ; then
	log "start the $PRODUCT_NAME SATA HARD DRIVE..."
	install_sata
elif [ "$PRODUCT_NAME" = "G6PLUS" ] ; then
	log "start the $PRODUCT_NAME USB HSDPA..."
	install_usbhsdpa
	log "start the $PRODUCT_NAME USB HARD DRIVE..."
	install_usbhdd
else
	log "start the $PRODUCT_NAME SATA HARD DRIVE..."
	install_sata
fi

# Check for scsi device (/dev/sda)
WAIT_COUNTER=15
while [  $WAIT_COUNTER -gt 0 ] ; do
	if [ -d /sys/class/scsi_device/0\:0\:0\:0 ] ; then
		break
	fi
	sleep 1
	let WAIT_COUNTER-=1
done

# Create device nodes
dev_setup

if [ $WAIT_COUNTER -eq 0 ] ; then
	echo "REBOOT"
	/sbin/reboot -f
	while true; do sleep 1; done
else
	log "HD ready"
fi

ROOTFS_FOLDER=""
IMG="rootfs.img"
mkdir -p $DATA_PARTITION_PATH
mount -o rw,noatime -t vfat /dev/sda1 $DATA_PARTITION_PATH
if [ -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.gz" ]; then
   mount $DATA_PARTITION_PATH -o remount,rw
   if [ -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG" ]; then
      mv $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.bak
   fi
   gunzip -d $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.gz
   mount $DATA_PARTITION_PATH -o remount,ro
fi
if [ ! -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG" ]; then
   log_and_die 1 "No rootfs found"
fi
log "Booting $IMG..."
mount $DATA_PARTITION_PATH -o remount,rw
mount $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG $NEWROOT_PATH -o loop
if [ -z "$init" ] ; then
   init=/sbin/init
fi
echo "8" > /sys/devices/system/display/gfxformat
mkdir -p $NEWROOT_PATH/mnt_data
mount --move $DATA_PARTITION_PATH $NEWROOT_PATH/mnt_data
$UMOUNT /sys
$UMOUNT /proc
log "exec switch_root $NEWROOT_PATH $init \"$@\""
exec switch_root $NEWROOT_PATH $init "$@"
