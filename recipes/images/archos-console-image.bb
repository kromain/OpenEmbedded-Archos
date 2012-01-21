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
# OpenGL modules and drivers
	omap3-sgx-modules \
	libgles-omap3 \
# Development utilities
	ldd \
	gdb \
	gdbserver \  
        "

IMAGE_EXTRA_SPACE = 65536

export IMAGE_BASENAME = "archos-console-image"
IMAGE_LINGUAS = ""