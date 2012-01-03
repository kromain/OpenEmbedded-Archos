DESCRIPTION = "Archos Init package"
PR ="r0"

DEPENDS    = "base-passwd"

COMPATIBLE_MACHINE = "(archos5|archos5it)"

SRC_URI = " \
	   file://ping_atmega.sh \
	   file://archos-init-0.2.sh "

S = "${WORKDIR}"

inherit update-rc.d

INITSCRIPT_NAME = "archos-init.sh"
INITSCRIPT_PARAMS = "start 25 S ."

do_install() {
        install -d ${D}${sbindir}
	install -d ${D}${sysconfdir}/init.d
        install -m 0755 ${WORKDIR}/ping_atmega.sh		${D}${sbindir}/ping_atmega.sh
        install -m 0755 ${WORKDIR}/archos-init-0.2.sh		${D}${sysconfdir}/init.d/archos-init.sh
}

