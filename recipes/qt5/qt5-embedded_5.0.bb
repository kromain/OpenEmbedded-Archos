SUMMARY = "Qt for Embedded Linux 5.0 "
SECTION = "libs"
LICENSE = "GPL LGPL"
PR = 1

DEPENDS += " freetype dbus openssl libgles-omap3"

QT_VERSION = 5.0.0

#IMPORTANT until the beta is out, we need a local git checkout >= than Apr 27 2012
# create a symlink to your checkout folder under src/ in the recipe

SRC_URI = "file://src"
S = "${WORKDIR}/qt5-build"

QT_BUILDMODE = "debug"

QT_CONFIGURE_OPTIONS = " \
    -device linux-archos-gen8-g++ \
    -device-option CROSS_COMPILE=${CROSS_DIR}/bin/${HOST_PREFIX} \
    -sysroot ${STAGING_DIR_HOST} \
    -${QT_BUILDMODE} \
    -prefix /usr \
    -developer-build \
    -opensource \
    -confirm-license \
    -nomake examples \
    -nomake tests \
    -v \
    "

FILES_${PN}     = "/usr/lib/*.so.* \
		   /usr/lib/fonts \
		   /usr/plugins/*/*.so \
		   /usr/imports/Qt/labs/*/*.so \
		   /usr/imports/Qt/labs/*/qmldir \
		   "
FILES_${PN}-dev = "/usr/include \
		   /usr/lib/*.so \
		   /usr/lib/*.la \
		   /usr/lib/pkgconfig \
                  "
FILES_${PN}-dbg = "/usr/lib/*.debug \
		   /usr/plugins/*/*.debug \
		   /usr/imports/Qt/labs/*/*.debug \
		   "

export CC=
export CXX=
export LD=
export CFLAGS=
export CXXFLAGS=
export LDFLAGS=

do_configure() {
    echo o | ../src/qt5-src/configure -v ${QT_CONFIGURE_OPTIONS}
}

do_compile() {
    oe_runmake
}

do_install() {
    oe_runmake install INSTALL_ROOT=${D}
}

do_stage() {
    oe_runmake install INSTALL_ROOT=${STAGING_DIR_HOST}

    echo [Paths] > ${STAGING_BINDIR}/qt.conf
    echo Prefix=${STAGING_LIBDIR}/.. >> ${STAGING_BINDIR}/qt.conf
    echo [Paths] > ${STAGING_BINDIR_NATIVE}/qt.conf
    echo Prefix=${STAGING_LIBDIR}/.. >> ${STAGING_BINDIR_NATIVE}/qt.conf

    if [ ! -f ${STAGING_BINDIR_NATIVE}/qmake ]; then
      ln -s  ${STAGING_BINDIR}/qmake ${STAGING_BINDIR_NATIVE}/qmake
    fi

    # Avoid annoying errors from some QA checker crap
    cd ${STAGING_LIBDIR}
    rm -rf libQt*.la
    rm -R pkgconfig
}
