DESCRIPTION = "BouncyMallow OpenGL/ES2 demo"
PR = "r1"
DEPENDS = "qt4-lighthouse"

inherit qt4_qmake

SRC_URI = "git://github.com/kromain/BouncyMallow.git;protocol=git"
SRCREV = "master"

S = "${WORKDIR}/git"

TARGET_DIR = "/opt/BouncyMallow"

do_install() {
	rm -rf ${D}${TARGET_DIR}

	mkdir -p ${D}${TARGET_DIR}
	cp BouncyMallow ${D}${TARGET_DIR}
}

# Packages
FILES_${PN} = "${TARGET_DIR}"
# Avoid errors from the QA checkers
INSANE_SKIP_${PN} = True
