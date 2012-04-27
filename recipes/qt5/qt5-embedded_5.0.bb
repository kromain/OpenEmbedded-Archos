SUMMARY = "Qt for Embedded Linux 5.0 "
SECTION = "libs"
LICENSE = "GPL LGPL"
PR = 1

DEPENDS += " freetype dbus openssl libgles-omap3"

QT_VERSION = 5.0.0

################# README
# Until the beta is out, we need a local git checkout >= Apr 27 2012
# so our device mkspecs are found.
#
# Follow instructions at http://qt-project.org/wiki/Building_Qt_5_from_Git
# to check out the code and initialize the submodules.
# You need the qt5 repo, with qtbase, qtdeclarative, etc. as submodules.
#
# Then, we need to create a symlink to the qt5 folder called qt5-src
# under src/ in the recipe folder:
#
# mkdir <path_to_oe_>/recipes/qt5/src
# ln -s <path_to_qt5> <path_to_oe_>/recipes/qt5/src/qt5-src
#
########################

SRC_URI = "file://src"
S = "${WORKDIR}/src/qt5-build"

QT_BUILDMODE = "debug"

QT_CONFIGURE_OPTIONS = " \
    -device linux-archos-gen8-g++ \
    -device-option CROSS_COMPILE=${CROSS_DIR}/bin/${HOST_PREFIX} \
    -sysroot ${STAGING_DIR_HOST} \
    -${QT_BUILDMODE} \
    -prefix /usr \
    -hostprefix ${S}/qtbase \
    -developer-build \
    -opensource \
    -confirm-license \
    -nomake examples \
    -nomake tests \
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
export QTDIR=

do_configure() {
    echo o | ../qt5-src/configure ${QT_CONFIGURE_OPTIONS}
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
