SRC_URI = "file://init-3.0.sh \
	   file://boot-image-240x320 \
	   file://boot-image-240x400 \
	   file://boot-image-272x480 \
	   file://boot-image-800x480 \
	   file://boot-image-480x854 \
	   file://boot-image-1024x600"

PR = "r0"
DESCRIPTON = "The Archos initramfs init script system."

COMPATIBLE_MACHINE = "archos-gen8"

RRECOMMENDS = ""

do_install() {
        install -m 0755 ${WORKDIR}/init-3.0.sh ${D}/init
        install -m 0755 ${WORKDIR}/boot-image-240x320 ${D}/boot-image-240x320
        install -m 0755 ${WORKDIR}/boot-image-240x400 ${D}/boot-image-240x400
        install -m 0755 ${WORKDIR}/boot-image-272x480 ${D}/boot-image-272x480
        install -m 0755 ${WORKDIR}/boot-image-800x480 ${D}/boot-image-800x480
        install -m 0755 ${WORKDIR}/boot-image-480x854 ${D}/boot-image-480x854
        install -m 0755 ${WORKDIR}/boot-image-1024x600 ${D}/boot-image-1024x600
}

PACKAGE_ARCH = "all"
FILES_${PN} += " init boot-image-1024x600  boot-image-240x320  boot-image-240x400  boot-image-272x480  boot-image-480x854  boot-image-800x480 "
