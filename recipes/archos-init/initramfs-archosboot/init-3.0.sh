#!/bin/sh

DATA_PARTITION_PATH="/mnt/data"
BOOT_IMAGE_BASE="/boot-image"

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

enable_backlight()
{
	echo 255 > /sys/devices/platform/omap_pwm_led.0/leds/lcd-backlight/brightness
}

wait_block_devices()
{
	device=$1
	wait_counter=10

	blkdev=/sys/block/`partdev2blockdev $device`
	while [  $wait_counter -gt 0 ] ; do
		if [ -d $blkdev ]; then
			break
		fi
		sleep 1
		let wait_counter-=1
	done

	if [ $wait_counter -eq 0 ] ; then
		return 1
	fi

	return 0;
}

partdev2blockdev()
{
	partdev=`echo $1 | cut -d'/' -f3`
	bkldev=""

	if [ "`echo $partdev | cut -c -2 `" = "sd" ] ; then
		blkdev=`echo $partdev | cut -c -3`
	elif [ "`echo $partdev | cut -c -4 `" = "loop" ] ; then
		blkdev="ram0"
	else
		blkdev=`echo $partdev | cut -c -7`
	fi

	echo "$blkdev"
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

# Get board and product information
PRODUCT_NAME=`$CAT /proc/cpuinfo | grep "Hardware" | cut -d ' ' -f 3`
KERNEL_VERSION=$($CAT /proc/version | cut -d ' ' -f 3)

# Show a nice boot image
case "$PRODUCT_NAME" in
    A28)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-240x320
        ;;
    A32)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-240x400
        ;;
    A32SD)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-240x400
        ;;
    A35)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-272x480
        ;;
    A43)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-480x854
        ;;
    A70S)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-800x480
        ;;
    A70H)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-800x480
        ;;
    A101IT)
        BOOT_IMAGE=$BOOT_IMAGE_BASE-1024x600
        ;;
esac
gunzip -c $BOOT_IMAGE > /dev/fb0

# Enabling LCD
enable_backlight

mkdir -p /etc
ln -s /proc/mounts /etc/mtab

CMDLINE=`$CAT /proc/cmdline`

for param in $CMDLINE ; do
    case "$param" in
        init=*)
            eval "$param"
            ;;
        root=*)
            eval "$param"
            ;;
        debug|verbose)
            verbose=1
            ;;
    esac
done

log "PRODUCT $PRODUCT_NAME, KERNEL VERSION $KERNEL_VERSION"

# Wait a to be sure the kernel has detected the root device
wait_block_devices $root

# Create device nodes
dev_setup

DATA_PARTITION=$root
echo "Root partition is $DATA_PARTITION"

ROOTFS_FOLDER=""
IMG="rootfs.img"
mkdir -p $DATA_PARTITION_PATH
echo "Mounting data partition:"
echo "   Trying EXT3..."
mount -t ext3 -o ro,noatime $DATA_PARTITION $DATA_PARTITION_PATH > /dev/null 2>&1
mount_result=$?
if [ $mount_result -ne 0 ] ; then
   # Trying ext3
   echo "   Trying VFAT..."
   mount -t vfat -o ro,noatime $DATA_PARTITION $DATA_PARTITION_PATH > /dev/null 2>&1
   mount_result=$?
fi	
if [ $mount_result -ne 0 ] ; then
   # Trying to guess the fs
   echo "   Trying to guess..."
   mount -o ro,noatime $DATA_PARTITION $DATA_PARTITION_PATH > /dev/null 2>&1
   mount_result=$?
fi
if [ $mount_result -ne 0 ] ; then
   log_and_die 1 "Unsupported filesystem"
fi
AVAILABLE_MEM=`df | grep $root | awk 'BEGIN{FS=" +"} {print $4}'`
echo "Available memory on $root : $AVAILABLE_MEM x 1K-blocs"
if [ -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.gz" ]; then
   if [ $AVAILABLE_MEM -lt 520000 ]; then
      log_and_die 1 "Not enough memory available ($AVAILABLE_MEM)"
   fi
   mount $DATA_PARTITION_PATH -o remount,rw,noatime
   if [ -f "$DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG" ]; then
      mv $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG $DATA_PARTITION_PATH/$ROOTFS_FOLDER/$IMG.bak
   fi
   echo "Uncompressing $IMG..."
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
mkdir -p $NEWROOT_PATH/mnt_data
mount --move $DATA_PARTITION_PATH $NEWROOT_PATH/mnt_data
$UMOUNT /sys
$UMOUNT /proc
log "exec switch_root $NEWROOT_PATH $init \"$@\""
exec switch_root $NEWROOT_PATH $init "$@"
