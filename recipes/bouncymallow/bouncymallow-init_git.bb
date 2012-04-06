DESCRIPTION = "BouncyMallow autostart script"
PR = "r1"
DEPENDS = "bouncymallow"

SRC_URI = "file://init-autostart.sh"
S = "${WORKDIR}"

PACKAGE_ARCH = "all"

do_install() {
	install -d ${D}${sysconfdir}/init.d/
	install -m 0755 init-autostart.sh ${D}${sysconfdir}/init.d/autostart
}

inherit update-rc.d

INITSCRIPT_NAME = "autostart"
INITSCRIPT_PARAMS = "start 99 5 2 . stop 19 0 1 6 ."
