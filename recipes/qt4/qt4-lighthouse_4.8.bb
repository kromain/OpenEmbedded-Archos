SUMMARY = "Qt 4.8 Lighthouse - Home edition"
SECTION = "libs"
LICENSE = "GPL LGPL"
PR = 1

DEPENDS += " freetype dbus openssl "

inherit qt4_qmake

QT_VERSION = 4.8.1

SRC_URI = "http://download.qt.nokia.com/qt/source/qt-everywhere-opensource-src-${QT_VERSION}.tar.gz \
	  file://${PV}/0001-Fix-build-with-QT_NO_CURSOR-defined.patch;patch=1 \
	  file://${PV}/0002-Fix-build-when-QT_NO_CURSOR-is-defined.patch;patch=1 \
	  file://${PV}/0003-Added-the-minimal-set-of-QPA-plugins-to-build-on-Lin.patch;patch=1 \
	  file://${PV}/0004-Fixed-bug-resulting-in-mouse-events-from-QPA-plugins.patch;patch=1 \
	  file://${PV}/0005-Added-xscale-yscale-parameters-to-the-LinuxInputMous.patch;patch=1 \
	  file://${PV}/0006-Fix-duplicate-mouse-event-being-sent-when-single-tou.patch;patch=1 \
	  file://${PV}/0007-Enable-build-of-the-QtDesigner-lib-for-embedded-too.patch;patch=1 \
	  file://${PV}/0009-Adjust-LinuxInput-plugin-defaults-for-the-Archos-tab.patch;patch=1 \
	  file://${PV}/mkspecs \
	  "
SRC_URI[md5sum] = "7960ba8e18ca31f0c6e4895a312f92ff"
SRC_URI[sha256sum] = "ef851a36aa41b4ad7a3e4c96ca27eaed2a629a6d2fa06c20f072118caed87ae8"

S = "${WORKDIR}/qt-everywhere-opensource-src-${QT_VERSION}"

QT_BUILDMODE = "debug"
QT_QMAKESPEC = "qpa/linux-angstrom-gnueabi-g++"

QT_CONFIGURE_OPTIONS = " \
    -prefix /usr \
    -${QT_BUILDMODE} \
    -qpa \
    -arch arm \
    -xplatform ${QT_QMAKESPEC} \
    -fast \
    -no-webkit \
    -no-phonon \
    -no-qt3support \
    -no-feature-CURSOR \
    -confirm-license \
    -nomake demos \
    -nomake examples \
    -nomake docs \
    -nomake translations \
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

do_configure() {
    unset QMAKESPEC
    unset CC
    unset CXX
    unset LD
    unset RANLIB
    unset STRIP

    cp -R ${WORKDIR}/${PV}/mkspecs .

    echo o | ./configure -v ${QT_CONFIGURE_OPTIONS} -I${STAGING_INCDIR} -L${STAGING_LIBDIR}
}

do_compile() {
    oe_runmake
}

do_install() {
    oe_runmake install INSTALL_ROOT=${D}
}

do_stage() {
    oe_runmake install INSTALL_ROOT=${STAGING_LIBDIR}/../../

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