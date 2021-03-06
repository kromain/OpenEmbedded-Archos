DESCRIPTION = "Opie device buttons settings dialog"
SECTION = "opie/settings"
PRIORITY = "optional"
LICENSE = "GPL"
RDEPENDS = "opie-button-settings-pics"
APPNAME = "buttonsettings"

S = "${WORKDIR}/button"

inherit opie

do_install() {
        install -d ${D}${palmtopdir}/pics/${APPNAME}/
	install -d ${D}${palmtopdir}/pics/devicebuttons/
        install -m 0644 ${WORKDIR}/pics/${APPNAME}/*.png ${D}${palmtopdir}/pics/${APPNAME}/
	install -m 0644 ${WORKDIR}/pics/devicebuttons/*.png ${D}${palmtopdir}/pics/devicebuttons/
}

PACKAGES_prepend = "opie-button-settings-pics "
PACKAGE_ARCH_opie-button-settings-pics = "${MACHINE_ARCH}"
FILES_opie-button-settings-pics = "${palmtopdir}/pics/devicebuttons/z*" 
FILES_opie-button-settings-pics_h1910 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_h1940 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_h3600 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_h3900 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_h4000 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_h5000 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_h6300 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_hx2000 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_hx4700 = "${palmtopdir}/pics/devicebuttons/ipaq*"
FILES_opie-button-settings-pics_simpad = "${palmtopdir}/pics/devicebuttons/simpad*"
