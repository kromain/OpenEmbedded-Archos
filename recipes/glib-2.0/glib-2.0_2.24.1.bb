DESCRIPTION = "GLib is a general-purpose utility library, \
which provides many useful data types, macros, \
type conversions, string utilities, file utilities, a main \
loop abstraction, and so on. It works on many \
UNIX-like platforms, Windows, OS/2 and BeOS."
LICENSE = "LGPLv2+"
SECTION = "libs"
PRIORITY = "optional"
DEPENDS = "glib-2.0-native gtk-doc zlib"

PR = "r2"

SRC_URI = "\
  http://ftp.gnome.org/pub/GNOME/sources/glib/2.24/glib-${PV}.tar.bz2;name=archive \
  file://glibconfig-sysdefs.h \
  file://configure-libtool.patch;patch=1 \
  file://g_once_init_enter.patch;patch=1 \
  file://gatomic-proper-pointer-get-cast.patch;patch=1 \
  file://gio.patch;patch=1 \
  file://60_wait-longer-for-threads-to-die.patch;patch=1 \
  file://glib-mkenums-interpreter.patch;patch=1 \
  file://disable-ipv6.patch;patch=1 \
"

noipv6 = "${@base_contains('DISTRO_FEATURES', 'ipv6', '', '-DDISABLE_IPV6', d)}"
EXTRA_OEMAKE_append = "'CFLAGS=${CFLAGS} ${noipv6}'"

SRC_URI[archive.md5sum] = "6a7db81c9a2cffe6a34dadb57d7ba2d2"
SRC_URI[archive.sha256sum] = "014c3da960bf17117371075c16495f05f36501db990851ceea658f15d2ea6d04"

SRC_URI_append_arm = " file://atomic-thumb.patch"
SRC_URI_append_armv6 = " file://gatomic_armv6.patch"
SRC_URI_append_armv7a = " file://gatomic_armv6.patch"

inherit autotools pkgconfig gettext 

S = "${WORKDIR}/glib-${PV}"

EXTRA_OECONF = "--disable-debug"

# Add and entry for your favourite arch if your (g)libc has a sane printf
EXTRA_OECONF_append_glibc_arm = "  --enable-included-printf=no "

do_configure_prepend () {
	install -m 0644 ${WORKDIR}/glibconfig-sysdefs.h .
}

do_install_append() {
	sed -i -e s:${STAGING_BINDIR_NATIVE}:${bindir}:g ${D}${bindir}/glib-mkenums || true
}

do_stage () {
	autotools_stage_all
	install -d ${STAGING_INCDIR}/glib-2.0/glib
	install -m 0755 ${S}/glibconfig.h ${STAGING_INCDIR}/glib-2.0/glibconfig.h
	install -d ${STAGING_DATADIR}/aclocal
	install -m 0644 ${S}/m4macros/glib-2.0.m4 ${STAGING_DATADIR}/aclocal/glib-2.0.m4
	install -m 0644 ${S}/m4macros/glib-gettext.m4 ${STAGING_DATADIR}/aclocal/glib-gettext.m4
}

PACKAGES =+ "gobject-2.0 gmodule-2.0 gthread-2.0 gio-2.0 glib-2.0-utils "
LEAD_SONAME = "libglib-2.0.*"
FILES_glib-2.0-utils = "${bindir}/*"
FILES_${PN} = "${libdir}/lib*so.* ${libdir}/gio/modules/*.so"
FILES_${PN}-dev += "${libdir}/glib-2.0 ${datadir}/glib-2.0 ${libdir}/gio/modules/*.la"
FILES_${PN}-dbg += "${libdir}/gio/modules/.debug"
FILES_gmodule-2.0 = "${libdir}/libgmodule-2.0.so.*"
FILES_gobject-2.0 = "${libdir}/libgobject-2.0.so.*"
FILES_gio-2.0 = "${libdir}/libgio-2.0.so.*"
FILES_gthread-2.0 = "${libdir}/libgthread-2.0.so.*"

# Let various glib components end up in glib package
# for compatibility (with binary packages from Maemo).
FILES_gthread-2.0_chinook-compat = ""
FILES_gmodule-2.0_chinook-compat = ""
FILES_gobject-2.0_chinook-compat = ""
FILES_gio-2.0_chinook-compat = ""
