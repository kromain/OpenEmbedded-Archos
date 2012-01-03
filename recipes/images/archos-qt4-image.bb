inherit image

IMAGE_PREPROCESS_COMMAND = "create_etc_timestamp"

ANGSTROM_EXTRA_INSTALL ?= ""

DEPENDS = "task-base-extended \
           ${@base_contains("MACHINE_FEATURES", "screen", "psplash-zap", "",d)} \
	   "

IMAGE_INSTALL = "task-base-extended \
	    ${ANGSTROM_EXTRA_INSTALL} \
	    ${@base_contains("MACHINE_FEATURES", "screen", "psplash-zap", "",d)} \
	    archos-init \
	    libgles-omap3 \
	    libgles-omap3-rawdemos \
	    qt4-lighthouse \
	    "

IMAGE_EXTRA_SPACE = 65536

IMAGE_BASENAME = "archos-qt4-image"
IMAGE_LINGUAS = ""
