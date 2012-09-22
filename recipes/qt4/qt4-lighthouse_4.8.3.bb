SUMMARY = "Qt 4.8.3 Lighthouse - Home edition"
SECTION = "libs"
LICENSE = "GPL LGPL"
PR = "r1"

DEPENDS += " freetype dbus openssl libgles-omap3"

SRC_URI = "http://releases.qt-project.org/qt4/source/qt-everywhere-opensource-src-${PV}.tar.gz \
	  file://0003-Added-the-minimal-set-of-QPA-plugins-to-build-on-Lin.patch;patch=1 \
	  file://0005-Added-xscale-yscale-parameters-to-the-LinuxInputMous.patch;patch=1 \
	  file://0007-Enable-build-of-the-QtDesigner-lib-for-embedded-too.patch;patch=1 \
	  file://0009-Adjust-LinuxInput-plugin-defaults-for-the-Archos-tab.patch;patch=1 \
	  file://enable-linuxinput-touch-events.patch;patch=1 \
	  file://mkspecs \
	  "

S = "${WORKDIR}/qt-everywhere-opensource-src-${PV}"

QT_BUILDMODE = "release"
QT_QMAKESPEC = "qpa/linux-angstrom-gnueabi-g++"

QT_CONFIGURE_OPTIONS = " \
    -prefix /usr \
    -sysroot ${STAGING_DIR_HOST} \
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

export OE_TOOLCHAIN_PREFIX=${HOST_PREFIX}
export OE_TOOLCHAIN_ARGS="${HOST_CC_ARCH}"
export CC=
export CXX=
export LD=
export CFLAGS=
export CXXFLAGS=
export LDFLAGS=

do_configure() {
    cp -R ${WORKDIR}/mkspecs .

    echo o | ./configure -v ${QT_CONFIGURE_OPTIONS}
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

	export fix_chars='sed -e "s/=/:/g" -e "s/ *-\([^ ]*\)/ \1/g"'
	
    # make settings persistent in qmake, so we can use it without and OE env
	${STAGING_BINDIR}/qmake -set QT_TOOLCHAIN_PREFIX ${HOST_PREFIX}
	${STAGING_BINDIR}/qmake -set QT_TOOLCHAIN_CFLAGS "`echo ${HOST_CC_ARCH} | eval $fix_chars`"
	${STAGING_BINDIR}/qmake -set QT_TOOLCHAIN_CXXFLAGS "`echo ${HOST_CC_ARCH} | eval $fix_chars`"
	
    if [ ! -f ${STAGING_BINDIR_NATIVE}/qmake ]; then
      ln -s ${STAGING_BINDIR}/qmake ${STAGING_BINDIR_NATIVE}/qmake
    fi
    if [ ! -f ${STAGING_BINDIR_NATIVE}/qt.conf ]; then
      ln -s ${STAGING_BINDIR}/qt.conf ${STAGING_BINDIR_NATIVE}/qt.conf
    fi

    # Avoid annoying errors from some QA checker crap
    cd ${STAGING_LIBDIR}
    rm -rf libQt*.la
    rm -R pkgconfig
}
