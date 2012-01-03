#
# archos-init.sh	Archos things to be done during bootup.
#

# Start the script which will ping the atmega (keep alive)
/usr/sbin/ping_atmega.sh &

# Enable host USB
modprobe musb_hdrc
echo 1 > /sys/devices/system/accessory/5vusb
# Give it a little time to detect USB devices...
sleep 3

# Enable RTC
modprobe msp430-rtc

# Enable Audio
modprobe omap2-audio-wm8985

: exit 0
