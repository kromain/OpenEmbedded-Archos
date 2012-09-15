#!/bin/sh

source ./build.defaults

if [ "$1" = "-h" ] ; then
	echo "Usage:"
	echo "  pack-sdk.sh [<build_name>]"
	echo ""
	echo "<build_name>: name of the build dir (Default: $BUILD_NAME)"
	echo ""	
	exit 1
fi

[ "$1" ] && BUILD_NAME=$1

OEBUILDDIR=../build-$BUILD_NAME
[ ! -d $OEBUILDDIR ] && echo "Couldn't find build dir $OEBUILDDIR! Aborting..." && exit 1

SDKNAME=$BUILD_NAME-sdk

SDKDIR=$OEBUILDDIR/$SDKNAME
TOOLCHAINDIR=$SDKDIR/toolchain
SYSROOTDIR=$SDKDIR/sysroot
ARMSYSROOTDIR=$SYSROOTDIR/armv7a-angstrom-linux-gnueabi
X86SYSROOTDIR=$SYSROOTDIR/i686-linux

echo "Preparing SDK files..."

mkdir $SDKDIR

echo "  * toolchain"

cp -R $OEBUILDDIR/tmp/cross/armv7a $TOOLCHAINDIR

echo "  * sysroot"

mkdir $SYSROOTDIR
cp -R $OEBUILDDIR/tmp/staging/armv7a-angstrom-linux-gnueabi $SYSROOTDIR
cp -R $OEBUILDDIR/tmp/staging/i686-linux $SYSROOTDIR

echo "  * setup script"

cp scripts/setup-sdk.sh $SDKDIR

echo "Packing up SDK into $SDKNAME.tar.gz..."

tar cz -C $OEBUILDDIR -f $OEBUILDDIR/$SDKNAME.tar.gz $SDKNAME
rm -rf $SDKNAME

echo "...Done!"
