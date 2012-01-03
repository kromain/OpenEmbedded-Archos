SRC_URI = "file://init.sh"
PR = "r0"
DESCRIPTON = "The Archos initramfs init script system."

COMPATIBLE_MACHINE = "archos5"

RRECOMMENDS = "kernel-module-ehci-hcd kernel-module-usb-storage kernel-module-libata kernel-module-ceata-archosg6 kernel-module-usbcore kernel-module-mmc-core kernel-module-omap-hsmmc"

do_install() {
        install -m 0755 ${WORKDIR}/init.sh ${D}/init
}

PACKAGE_ARCH = "all"
FILES_${PN} += " init "
