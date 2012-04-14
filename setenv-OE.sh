#!/bin/sh

source ./build.defaults

if [ "$1" = "-h" ] ; then
	echo "Usage:"
	echo "  . setenv-OE.sh [<build_name>]"
	echo ""
	echo "<build_name>: name of the build dir, created if it doesn't exist (Default: $BUILD_NAME)"
	echo ""
	return 1
fi

[ "$1" ] && BUILD_NAME=$1

OEBUILDDIR=../build-$BUILD_NAME
[ ! -e $OEBUILDDIR ] && mkdir $OEBUILDDIR

export OESRCDIR=$PWD
export OEBUILDDIR=`cd $OEBUILDDIR; pwd` 
export BBPATH=$OEBUILDDIR:$OESRCDIR
export BB_ENV_EXTRAWHITE="OESRCDIR OEBUILDDIR"
cd $OEBUILDDIR
