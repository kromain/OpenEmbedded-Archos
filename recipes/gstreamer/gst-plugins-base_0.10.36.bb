require gst-plugins.inc

PROVIDES += "gst-plugins"

DEPENDS += "alsa-lib freetype"

SRC_URI += "file://gst-plugins-base-tremor.patch;patch=1 \
            file://configure.ac-fix-subparse-plugin.patch;patch=1"

SRC_URI[md5sum] = "776c73883e567f67b9c4a2847d8d041a"
SRC_URI[sha256sum] = "2cd3b0fa8e9b595db8f514ef7c2bdbcd639a0d63d154c00f8c9b609321f49976"

PR = "r4"

EXTRA_OECONF += "--disable-freetypetest --disable-pango --disable-gnome_vfs --disable-orc"

do_configure_prepend() {
	# This m4 file contains nastiness which conflicts with libtool 2.2.2
	rm -f ${S}/m4/lib-link.m4
}

