#
# Simple qmake builder, doesn't use the convoluted native stuff
#

export OE_QMAKESPEC_PATH = "${STAGING_INCDIR}/../mkspecs"
export OE_QMAKESPEC = "qpa/linux-angstrom-gnueabi-g++"
export OE_QMAKE_QMAKE = "${STAGING_BINDIR_NATIVE}/qmake"

export OE_QMAKE_CC="${CC}"
export OE_QMAKE_CXX="${CXX}"
export OE_QMAKE_LINK="${CXX}"
export OE_QMAKE_AR="${AR} cqs"
export OE_QMAKE_STRIP="${STRIP}"
export OE_QMAKE_OBJCOPY="${OBJCOPY}"
export OE_QMAKE_CFLAGS="${CFLAGS}"
export OE_QMAKE_CXXFLAGS="${CXXFLAGS}"
export OE_QMAKE_LDFLAGS="${LDFLAGS}"

export OE_QMAKE_INCDIR_QT = "${STAGING_INCDIR}"
export OE_QMAKE_LIBDIR_QT = "${STAGING_LIBDIR}"

export OE_LIBGLES_DIRNAME = "libgles-omap3-4.03.00.02-r15"
export OE_QMAKE_INCDIR_OPENGL = "${WORKDIR}/../${OE_LIBGLES_DIRNAME}/image/usr/include/"
export OE_QMAKE_LIBDIR_OPENGL = "${WORKDIR}/../${OE_LIBGLES_DIRNAME}/image/usr/lib/"

qt4_qmake_do_configure() {
	if [ ! -z "${EXTRA_QMAKEVARS_POST}" ]; then
		AFTER="-after"
		QMAKE_VARSUBST_POST="${EXTRA_QMAKEVARS_POST}"
		oenote "qmake postvar substitution: ${EXTRA_QMAKEVARS_POST}"
	fi

	if [ ! -z "${EXTRA_QMAKEVARS_PRE}" ]; then
		QMAKE_VARSUBST_PRE="${EXTRA_QMAKEVARS_PRE}"
		oenote "qmake prevar substitution: ${EXTRA_QMAKEVARS_PRE}"
	fi

	${OE_QMAKE_QMAKE} -spec ${OE_QMAKESPEC_PATH}/${OE_QMAKESPEC} -o Makefile $QMAKE_VARSUBST_PRE $AFTER $QMAKE_VARSUBST_POST || die "Error calling ${OE_QMAKE_QMAKE} on $PWD"
}

EXPORT_FUNCTIONS do_configure

addtask configure after do_unpack do_patch before do_compile
