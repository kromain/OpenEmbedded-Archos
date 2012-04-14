#!/bin/sh

source ./build.defaults

if [ "$1" = "-h" ] ; then
	echo "Usage:"
	echo "  . build.sh [<build_name> [<target>]]"
	echo ""
	echo "<build_name>: name of the build dir (Default: $BUILD_NAME)"
	echo "<target>: the target image or package to build (Default: $BUILD_TARGET)"
	echo ""	
	exit 1
fi

[ "$1" ] && BUILD_NAME=$1
source ./setenv-OE.sh $BUILD_NAME

[ ! -d $OEBUILDDIR/conf ] && mkdir $OEBUILDDIR/conf
[ ! -f $OEBUILDDIR/conf/local.conf ] && (cp $OESRCDIR/conf/local.conf.$BUILD_NAME $OEBUILDDIR/conf/local.conf || echo "Couldn't find build config file! Aborting." && exit 1)

[ "$2" ] && BUILD_TARGET=$2

bitbake initramfs-archos-image $BUILD_TARGET
