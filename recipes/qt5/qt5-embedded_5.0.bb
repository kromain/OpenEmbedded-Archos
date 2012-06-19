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

SRC_URI = "file://src \
#		file://Add-top-level-include-path-for-QtCore.patch;patch=1 \
		"
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

QT_CONF_FILE = ${STAGING_BINDIR_NATIVE}/qt.conf

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
    mv ${D}/${STAGING_DIR_HOST}/usr ${D}/usr
}

do_stage() {
    cp -R ${D}/usr/* ${STAGING_DIR_HOST}/usr
    # Qt5 installs the host tools in the host install prefix
    cp -R ${D}${S}/qtbase/* ${STAGING_DIR_NATIVE}/usr

    # We must adjust the host prefix, need a qt.conf file for that
    echo [Paths] > ${QT_CONF_FILE}
    echo Sysroot=${STAGING_DIR_HOST} >> ${QT_CONF_FILE}
    echo Prefix=/usr >> ${QT_CONF_FILE}
    echo HostPrefix=${STAGING_DIR_NATIVE}/usr >> ${QT_CONF_FILE}

    export fix_chars='sed -e "s/=/:/g" -e "s/ *-\([^ ]*\)/ \1/g"'

    # Now make the toolchain settings persistent in qmake
    # so we can use it without an OE env
    ${STAGING_BINDIR_NATIVE}/qmake -set CROSS_COMPILE ${CROSS_DIR}/bin/${HOST_PREFIX}
    ${STAGING_BINDIR_NATIVE}/qmake -set COMPILER_FLAGS "`echo ${TARGET_CXXFLAGS} | eval $fix_chars`"
    ${STAGING_BINDIR_NATIVE}/qmake -set LINKER_FLAGS "`echo ${TARGET_LDFLAGS} | eval $fix_chars`"

    # Avoid annoying errors from some QA checker crap
    cd ${STAGING_LIBDIR}
    rm -rf libQt*.la
    rm -R pkgconfig
}
