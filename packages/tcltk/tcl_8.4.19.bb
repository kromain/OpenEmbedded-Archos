DESCRIPTION = "Tool Command Language"
LICENSE = "tcl"
SECTION = "devel/tcltk"
HOMEPAGE = "http://tcl.sourceforge.net"
PR = "r0"

SRC_URI = "\
  ${SOURCEFORGE_MIRROR}/tcl/tcl${PV}-src.tar.gz \
  file://tcl-add-soname.patch;patch=1;pnum=2 \
#  file://fix-configure.patch;patch=1;pnum=2 \
"
S = "${WORKDIR}/tcl${PV}/unix"

inherit autotools

EXTRA_OECONF = "--enable-threads"

do_configure() {
	gnu-configize
	oe_runconf
}

do_compile_prepend() {
	echo > ../compat/fixstrtod.c
}

do_stage() {
	autotools_stage_all
	mv libtcl8.4.so libtcl8.4.so.0
	oe_libinstall -so libtcl8.4 ${STAGING_LIBDIR}
}

do_install() {
	autotools_do_install
	mv libtcl8.4.so libtcl8.4.so.0
	oe_libinstall -so libtcl8.4 ${D}${libdir}
	ln -sf ./tclsh8.4 ${D}${bindir}/tclsh
}

PACKAGES =+ "${PN}-lib"
FILES_${PN}-lib = "${libdir}/libtcl8.4.so.*"
FILES_${PN} += "${libdir}/tcl8.4"
FILES_${PN}-dev += "${libdir/tclConfig.sh"