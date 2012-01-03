inherit image

DEPENDS = "\
        ${MACHINE_TASK_PROVIDER} \
#        virtual/xserver"
        "

IMAGE_INSTALL = "\
        ${MACHINE_TASK_PROVIDER} \
        archos-init \
        "

export IMAGE_BASENAME = "archos-image"
