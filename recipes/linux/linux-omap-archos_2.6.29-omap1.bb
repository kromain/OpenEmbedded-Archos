require linux.inc

DESCRIPTION = "Archos Gen 8 Linux kernel for OMAP processors"
KERNEL_IMAGETYPE = "zImage"

COMPATIBLE_MACHINE = "archos-gen8"

PV = "2.6.29-omap1"

SRC_URI = "${KERNELORG_MIRROR}/pub/linux/kernel/v2.6/linux-2.6.29.tar.bz2 \
           file://patch-archos-2.6.29-omap1.bz2;patch=1 \
#           file://rotate-touchscreen-on-A101IT.patch;patch=1 \
           file://remove-pvr-driver-from-kernel.patch;patch=1 \
           file://defconfig"

S = "${WORKDIR}/linux-2.6.29"
