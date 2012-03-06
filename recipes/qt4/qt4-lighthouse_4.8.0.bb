SUMMARY = "Qt 4.8.0 Lighthouse - Home edition"
SECTION = "libs"
LICENSE = "GPL LGPL QPL"

DEPENDS += " freetype dbus openssl "

inherit qt4_qmake

SRC_URI = "file://src"
S       = "${WORKDIR}/build"

QT_SRC_DIR = "/home/romain/dev/Qt/qt-4.8-src"

QT_CONFIGURE_OPTIONS = " \
    -prefix /usr \
    -debug \
#    -release \
    -qpa \
    -arch arm \
    -xplatform qpa/linux-angstrom-gnueabi-g++ \
    -fast \
#    -webkit \
    -no-webkit \
    -no-phonon \
    -no-qt3support \
    -no-feature-CURSOR \
    -confirm-license \
    -nomake examples \
    "

FILES_${PN}     = "/usr/demos \
		   /usr/imports \
		   /usr/lib \
		   /usr/plugins \
                  "

do_configure() {
    unset QMAKESPEC
    unset CC
    unset CXX
    unset LD
    unset RANLIB
    unset STRIP

    echo c | ${QT_SRC_DIR}/configure -v ${QT_CONFIGURE_OPTIONS} -I${STAGING_INCDIR} -L${STAGING_LIBDIR}
}

do_compile() {
    oe_runmake
}

do_install() {
    oe_runmake install INSTALL_ROOT=${D}
}

do_stage() {
    oe_runmake install INSTALL_ROOT=${STAGING_LIBDIR}/../../
    if [ ! -f ${STAGING_BINDIR_NATIVE}/qmake ]; then
      ln -s  ${STAGING_BINDIR}/qmake ${STAGING_BINDIR_NATIVE}/qmake
    fi
    echo [Paths] > ${STAGING_BINDIR}/qt.conf
    echo Prefix=${STAGING_LIBDIR}/.. >> ${STAGING_BINDIR}/qt.conf

    # Avoid annoying errors from some QA checker crap
    cd ${STAGING_LIBDIR}
    rm -rf libQt*.la
    cd pkgconfig
    rm -rf Qt*.pc
    rm -rf .debug
}

do_package() {
}

