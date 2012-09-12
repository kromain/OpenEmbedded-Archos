DESCRIPTION = "Alsa sound library"
HOMEPAGE = "http://www.alsa-project.org"
SECTION = "libs/multimedia"
LICENSE = "LGPLv2.1"

# configure.in sets -D__arm__ on the command line for any arm system
# (not just those with the ARM instruction set), this should be removed,
# (or replaced by a permitted #define).
#FIXME: remove the following
ARM_INSTRUCTION_SET = "arm"

SRC_URI = "ftp://ftp.alsa-project.org/pub/lib/alsa-lib-${PV}.tar.bz2 \
           file://fix-tstamp-declaration.patch;patch=1 \
           file://fix_libmath.patch;patch=1 \
	  "

SRC_URI[md5sum] = "06fe5819020c6684b991dcffc5471304"
SRC_URI[sha256sum] = "5a1a805cf04106316d549ec650116ce6711a162e107ba8b3c551866680e286e6"

inherit autotools pkgconfig


EXTRA_OECONF = "--with-cards=pdaudiocf --with-oss=yes --disable-python"


require alsa-fpu.inc
EXTRA_OECONF += "${@get_alsa_fpu_setting(bb, d)} "


require alsa-versym.inc
EXTRA_OECONF += "${@get_alsa_versym_setting(bb, d)} "

do_stage () {
	autotools_stage_all
}

PACKAGES =+ "alsa-server libasound alsa-conf-base alsa-conf alsa-doc alsa-dev"
FILES_${PN}-dbg += "${libdir}/alsa-lib/*/.debu*"
FILES_libasound = "${libdir}/libasound.so.*"
FILES_alsa-server = "${bindir}/*"
FILES_alsa-conf = "${datadir}/alsa/"
FILES_alsa-dev += "${libdir}/libasound.so ${libdir}/pkgconfig/ /usr/include/ ${datadir}/aclocal/*"
FILES_alsa-conf-base = "\
${datadir}/alsa/alsa.conf \
${datadir}/alsa/cards/aliases.conf \
${datadir}/alsa/pcm/default.conf \
${datadir}/alsa/pcm/dmix.conf \
${datadir}/alsa/pcm/dsnoop.conf"

RDEPENDS_libasound = "alsa-conf-base"
