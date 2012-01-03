# Sample initramfs image, very minimal

#IMAGE_INSTALL = "initramfs-archosboot busybox-static-light kernel-module-ehci-hcd kernel-module-usb-storage kernel-module-libata kernel-module-ceata-archosg6 kernel-module-usbcore kernel-module-mmc-core kernel-module-omap-hsmmc"
IMAGE_INSTALL = "initramfs-archosboot busybox-static-light"

export IMAGE_BASENAME = "initramfs-archos-image"
IMAGE_LINGUAS = ""

IMAGE_FSTYPES = "cpio.gz"

# We use Busybox init
IMAGE_INIT_MANAGER = ""

# Install only ${IMAGE_INSTALL}, not even deps
#PACKAGE_INSTALL_NO_DEPS = "1"

# Remove any kernel-image that the kernel-module-* packages may have pulled in.
PACKAGE_REMOVE = "kernel-image-* update-modules module-init-tools-depmod uclibc update-rc.d"
ROOTFS_POSTPROCESS_COMMAND += "opkg-cl ${IPKG_ARGS} -force-depends \
                                remove ${PACKAGE_REMOVE};"

ROOTFS_POSTPROCESS_COMMAND += "rm -rf ${IMAGE_ROOTFS}/usr/lib; \
			       rm -rf ${IMAGE_ROOTFS}/etc; \
			       rm -rf ${IMAGE_ROOTFS}/boot; \
			       rm -rf ${IMAGE_ROOTFS}/usr/share; \
			       rm -rf ${IMAGE_ROOTFS}/usr/libexec; \
			       rm -rf ${IMAGE_ROOTFS}/lib/udev; \
			       rm -f ${IMAGE_ROOTFS}/lib/*.so*; \
			       rm -f ${IMAGE_ROOTFS}/sbin/depmod*; \
			       rm -f ${IMAGE_ROOTFS}/sbin/ldconfig; \
			       rm -f ${IMAGE_ROOTFS}/sbin/udev*; \
			       mkdir -p ${IMAGE_ROOTFS}/new-root; \
			       mkdir -p ${IMAGE_ROOTFS}/sys; \
			       mkdir -p ${IMAGE_ROOTFS}/proc; \
			       mkdir -p ${IMAGE_ROOTFS}/mnt/data; \
			      "

inherit image
