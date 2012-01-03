SRC_URI = "file://init-2.0.sh \
	   file://boot-image"

PR = "r0"
DESCRIPTON = "The Archos initramfs init script system."

COMPATIBLE_MACHINE = "(archos5|archos5it)"

RRECOMMENDS = " kernel-module-ehci-hcd kernel-module-usb-storage kernel-module-libata kernel-module-ceata-archosg6 kernel-module-usbcore kernel-module-mmc-core kernel-module-omap-hsmmc "

do_install() {
        install -m 0755 ${WORKDIR}/init-2.0.sh ${D}/init
        install -m 0755 ${WORKDIR}/boot-image ${D}/boot-image
}

PACKAGE_ARCH = "all"
FILES_${PN} += " init boot-image "
