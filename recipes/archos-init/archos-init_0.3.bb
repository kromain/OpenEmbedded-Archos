DESCRIPTION = "Archos Init package"
PR ="r0"

DEPENDS    = "base-passwd"
RDEPENDS    = "archos-tscalib"

COMPATIBLE_MACHINE = "archos-gen8"

SRC_URI = " \
	   file://archos-init-0.3.sh "

S = "${WORKDIR}"

inherit update-rc.d

INITSCRIPT_NAME = "archos-init.sh"
INITSCRIPT_PARAMS = "start 25 S ."

do_install() {
        install -d ${D}${sbindir}
	install -d ${D}${sysconfdir}/init.d
        install -m 0755 ${WORKDIR}/archos-init-0.3.sh		${D}${sysconfdir}/init.d/archos-init.sh
}

