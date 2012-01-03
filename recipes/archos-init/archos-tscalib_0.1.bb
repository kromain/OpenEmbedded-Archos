DESCRIPTION = "Simple touchscreen calibration application"
LICENSE = "GPL"

SRC_URI = "file://archos-tscalib.c \
	   file://DroidSans.h"

S = "${WORKDIR}"

do_compile() {
	${CC} archos-tscalib.c -o archos-tscalib
}

do_install() {
	install -d ${D}${bindir}
	install -m 0755 archos-tscalib ${D}${bindir}
}
