DESCRIPTION = "Archos Init package"
PR ="r0"

DEPENDS    = "base-passwd"

COMPATIBLE_MACHINE = "archos5"

SRC_URI = " \
	   file://ping_atmega.sh \
	   file://archos-init.sh "

S = "${WORKDIR}"

inherit update-rc.d

INITSCRIPT_NAME = "archos-init.sh"
INITSCRIPT_PARAMS = "start 25 S ."

do_install() {
        install -d ${D}${sbindir}
	install -d ${D}${sysconfdir}/init.d
        install -m 0755 ${WORKDIR}/ping_atmega.sh		${D}${sbindir}/ping_atmega.sh
        install -m 0755 ${WORKDIR}/archos-init.sh		${D}${sysconfdir}/init.d/archos-init.sh
}

