#
# archos-init.sh	Archos things to be done during bootup.
#


KERNEL_VERSION=$(uname -r)
PRODUCT_NAME=`cat /proc/cpuinfo | grep "Hardware" | cut -d ' ' -f 3`
CALIB_FILE="/etc/pointercal"

# Calibrate the touchscreen if needed
if [ ! -s $CALIB_FILE ]; then
   if [ "$PRODUCT_NAME" = "A32" ] || [ "$PRODUCT_NAME" = "A43" ] ; then
      archos-tscalib /dev/fb0 /dev/input/event1
   elif [ "$PRODUCT_NAME" = "A28" ] || [ "$PRODUCT_NAME" = "A32SD" ] || [ "$PRODUCT_NAME" = "A35" ] ; then
      archos-tscalib /dev/fb0 /dev/input/event0
   fi
fi

# Enable host USB
modprobe musb_hdrc mode_default=1 use_dma=1
sleep 3
# Give it a little time to detect USB devices...

# Enable Audio
modprobe snd_soc_omap_mcbsp
modprobe snd_soc_wl1271
modprobe snd_soc_tda19989
modprobe snd_soc_wm8988
modprobe snd_soc_archos
modprobe snd_pcm_oss

: exit 0
