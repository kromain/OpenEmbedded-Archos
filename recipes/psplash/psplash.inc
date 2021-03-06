DESCRIPTION = "Userspace framebuffer boot logo based on usplash."
HOMEPAGE = "http://projects.o-hand.com/psplash"
SECTION = "base"
LICENSE = "GPL"
RDEPENDS = "initscripts"
PROVIDES = "virtual/psplash"
RPROVIDES_${PN} = "virtual/psplash"

PV = "0.0+svnr${SRCREV}"
PR = "r2"

# You can create your own pslash-hand-img.h by doing
# ./make-image-header.sh <file>.png HAND
# and rename the resulting .h to pslash-hand-img.h (for the logo)
# respectively psplash-bar-img.h (BAR) for the bar.
# You might also want to patch the colors (see patch)

inherit autotools pkgconfig update-rc.d

do_configure_append() {
	install -m 0644 ${WORKDIR}/psplash-hand-img.h ${S}/
	install -m 0644 ${WORKDIR}/psplash-bar-img.h ${S}/

	if [ -e "${WORKDIR}/psplash.h" ]; then
		install -m 0644 ${WORKDIR}/psplash.h ${S}/
	fi
}

do_install_prepend() {
	install -d ${D}/mnt/.psplash/
	install -d ${D}${sysconfdir}/default/
	install -m 0644 ${WORKDIR}/psplash-default ${D}${sysconfdir}/default/psplash
	install -d ${D}${sysconfdir}/init.d/
	install -m 0755 ${WORKDIR}/psplash-init ${D}${sysconfdir}/init.d/psplash
}

INITSCRIPT_NAME = "psplash"
INITSCRIPT_PARAMS = "start 01 S . stop 20 0 1 6 ."

PACKAGES =+ "psplash-support"

RDEPENDS_${PN} += "psplash-support"
FILES_psplash-support += "/mnt/.psplash ${sysconfdir} ${bindir}/psplash-write"
