#
# Simple qmake builder, doesn't use the convoluted native stuff
#

export OE_QMAKE_QMAKE = "${STAGING_BINDIR_NATIVE}/qmake"

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

	${OE_QMAKE_QMAKE} -o Makefile $QMAKE_VARSUBST_PRE $AFTER $QMAKE_VARSUBST_POST || die "Error calling ${OE_QMAKE_QMAKE} on $PWD"
}

EXPORT_FUNCTIONS do_configure

addtask configure after do_unpack do_patch before do_compile
