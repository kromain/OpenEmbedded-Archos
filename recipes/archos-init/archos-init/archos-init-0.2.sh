#
# archos-init.sh	Archos things to be done during bootup.
#


KERNEL_VERSION=$(uname -r)

# Start the script which will ping the atmega (keep alive)
/usr/sbin/ping_atmega.sh &

# Enable host USB
if [ "$KERNEL_VERSION" = "2.6.22.1-omap1" ]; then
   modprobe musb_hdrc
   echo 1 > /sys/devices/system/accessory/5vusb
   sleep 3
elif [ "$KERNEL_VERSION" = "2.6.27.10-omap1" ]; then
   modprobe musb_hdrc
   echo 1 > /sys/devices/platform/accessory_plug/5vusb
   sleep 3
else
   echo "Cannot enable host USB: Kernel version $KERNEL_VERSION not supported."
fi
# Give it a little time to detect USB devices...

# Enable RTC
if [ "$KERNEL_VERSION" = "2.6.22.1-omap1" ]; then
   modprobe msp430-rtc
elif [ "$KERNEL_VERSION" != "2.6.27.10-omap1" ]; then
   echo "Cannot enable RTC: Kernel version $KERNEL_VERSION not supported."
fi

# Enable Audio
if [ "$KERNEL_VERSION" = "2.6.22.1-omap1" ]; then
   # OSS
   modprobe omap2-audio-wm8985
elif [ "$KERNEL_VERSION" = "2.6.27.10-omap1" ]; then
   # Alsa
   modprobe snd_soc_wm8985
   modprobe snd_soc_archos
   modprobe snd_pcm_oss
else
   echo "Cannot enable audio: Kernel version $KERNEL_VERSION not supported."
fi

: exit 0
