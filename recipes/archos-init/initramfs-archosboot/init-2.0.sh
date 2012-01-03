#!/bin/sh

DATA_PARTITION_PATH="/mnt/data"
BOOT_IMAGE="/boot-image"

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
	$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/usb/host/ehci-hcd.ko
	$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/usb/storage/usb-storage.ko delay_use=0
	if [ "$KERNEL_VERSION" = "2.6.22.1-omap1" ]; then
		echo 1 > /sys/devices/system/usbhdd/usbhdd0/hubvcc
		echo 1 > /sys/devices/system/usbhdd/usbhdd0/hddvcc
	elif [ "$KERNEL_VERSION" = "2.6.27.10-omap1" ]; then
		echo 1 > /sys/devices/platform/usbhdd/hddvcc
	fi
}

install_usbhsdpa()
{
	echo 0 > /sys/devices/system/hsdpa/hsdpa0/powergpio
	echo 1 > /sys/devices/system/hsdpa/hsdpa0/resetcycle
}

install_sata()
{
	$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/usb/host/ehci-hcd.ko
	$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/usb/storage/usb-storage.ko delay_use=0
	if [ "$KERNEL_VERSION" = "2.6.22.1-omap1" ]; then
		echo 1 > /sys/devices/system/usb2sata/usb2sata0/satavcc
	elif [ "$KERNEL_VERSION" = "2.6.27.10-omap1" ]; then
		echo 1 > /sys/devices/platform/usb2sata/satavcc
	fi
	sleep 1
}

install_ceata()
{
	$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/ata/libata.ko
	$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/ata/ceata_archosg6.ko
	$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/usb/storage/usb-storage.ko delay_use=0
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

# Show a nice boot image
gunzip -c $BOOT_IMAGE > /dev/fb0

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
KERNEL_VERSION=$($CAT /proc/version | cut -d ' ' -f 3)

log "PRODUCT $PRODUCT_NAME, KERNEL VERSION $KERNEL_VERSION"


# Load necessary modules
$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/usb/core/usbcore.ko
$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/mmc/core/mmc_core.ko
$INSMOD /lib/modules/$KERNEL_VERSION/kernel/drivers/mmc/host/omap_hsmmc.ko

# Start the HDD and the LCD/TVout
if [ "$PRODUCT_NAME" = "G6S" ] ; then
	if [ -e /sys/devices/platform/usbhdd/hddvcc ] || [ -e /sys/devices/system/usbhdd/usbhdd0/hddvcc ] ; then
		log "start the $PRODUCT_NAME USB HARD DRIVE..."
		install_usbhdd
	else
		log "start the $PRODUCT_NAME CEATA HARD DRIVE..."
		install_ceata
	fi
elif [ "$PRODUCT_NAME" = "A5S" ] ; then
	log "start the $PRODUCT_NAME USB HARD DRIVE..."
	install_usbhdd
elif [ "$PRODUCT_NAME" = "G6H" ] || [ "$PRODUCT_NAME" = "G6L" ] || [ "$PRODUCT_NAME" = "A5H" ]; then
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
echo "Mounting data partition:"
echo "   Trying EXT3..."
mount -t ext3 -o ro,noatime /dev/sda1 $DATA_PARTITION_PATH > /dev/null 2>&1
mount_result=$?
if [ $mount_result -ne 0 ] ; then
   # Trying ext3
   echo "   Trying VFAT..."
   mount -t vfat -o ro,noatime /dev/sda1 $DATA_PARTITION_PATH > /dev/null 2>&1
   mount_result=$?
fi	
if [ $mount_result -ne 0 ] ; then
   # Trying to guess the fs
   echo "   Trying to guess..."
   mount -o ro,noatime /dev/sda1 $DATA_PARTITION_PATH > /dev/null 2>&1
   mount_result=$?
fi
if [ $mount_result -ne 0 ] ; then
   log_and_die 1 "Unsupported filesystem"
fi
if [ -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.gz" ]; then
   mount $DATA_PARTITION_PATH -o remount,rw,noatime
   if [ -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG" ]; then
      mv $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.bak
   fi
   gunzip -d $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.gz
   mount $DATA_PARTITION_PATH -o remount,ro,noatime
fi
if [ ! -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG" ]; then
   log_and_die 1 "No rootfs found"
fi
log "Booting $IMG..."
mount $DATA_PARTITION_PATH -o remount,rw,noatime
mount $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG $NEWROOT_PATH -o loop,noatime
if [ -z "$init" ] ; then
   init=/sbin/init
fi
if [ "$KERNEL_VERSION" = "2.6.22.1-omap1" ]; then
	echo "8" > /sys/devices/system/display/gfxformat
fi
mkdir -p $NEWROOT_PATH/mnt_data
mount --move $DATA_PARTITION_PATH $NEWROOT_PATH/mnt_data
$UMOUNT /sys
$UMOUNT /proc
log "exec switch_root $NEWROOT_PATH $init \"$@\""
exec switch_root $NEWROOT_PATH $init "$@"
