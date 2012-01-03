SECTION = "base"
PRIORITY = "standard"
DESCRIPTION = "Manage symlinks in /etc/rcN.d"
LICENSE = "GPL"
S = "${WORKDIR}"
PR = "r3"

SRC_URI = "file://update-rc.d"

PACKAGE_ARCH = "all"

do_compile() {
}

do_stage() {
	install -m 0755 ${S}/update-rc.d ${STAGING_BINDIR_NATIVE}/
}

do_install() {
	install -d ${D}${sbindir}
	install -m 0755 ${S}/update-rc.d ${D}${sbindir}/update-rc.d
}
