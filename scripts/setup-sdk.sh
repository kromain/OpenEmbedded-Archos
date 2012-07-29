#!/bin/sh

TOOLCHAINDIR=$PWD/toolchain
SYSROOTDIR=$PWD/sysroot
ARMSYSROOTDIR=$SYSROOTDIR/armv7a-angstrom-linux-gnueabi
X86SYSROOTDIR=$SYSROOTDIR/i686-linux

echo "Setting up toolchain..." 

# The executables have a hardcoded RPATH that must be adjusted
# NOTE: Ideally we should use $ORIGIN when building the toolchain and avoid this step

echo "  * adjusting rpath for GCC"

for FILE in $TOOLCHAINDIR/bin/* $TOOLCHAINDIR/libexec/gcc/arm-angstrom-linux-gnueabi/4.3.1/*
do
	if [ -f $FILE ] && [ -x $FILE ]; then
		chrpath -r $X86SYSROOTDIR/usr/lib $FILE &> /dev/null
	fi
done

if [ -f $ARMSYSROOTDIR/usr/bin/qmake ]; then
	QTVERSION=`$ARMSYSROOTDIR/usr/bin/qmake -query QT_VERSION | cut -c 1`
	SDKNAME=qt$QTVERSION
	echo "Setting up Qt$QTVERSION..."

	echo "  * adjusting qmake toolchain"

	$ARMSYSROOTDIR/usr/bin/qmake -set QT_TOOLCHAIN_PREFIX arm-angstrom-linux-gnueabi-

	echo "  * adjusting qmake sysroot"

	sed -i -e "s,\$\$quote\(.*\),\$\$quote\($ARMSYSROOTDIR\)," $ARMSYSROOTDIR/usr/mkspecs/qconfig.pri

	echo "  * adjusting libraries install prefix"

	echo "[Paths]" > $ARMSYSROOTDIR/usr/bin/qt.conf
	echo "Prefix=$ARMSYSROOTDIR/usr" >> $ARMSYSROOTDIR/usr/bin/qt.conf
	
	echo "  * fixing symlinks"
	
	ln -f -s $ARMSYSROOTDIR/usr/bin/qmake $X86SYSROOTDIR/usr/bin/qmake
	ln -f -s $ARMSYSROOTDIR/usr/bin/qt.conf $X86SYSROOTDIR/usr/bin/qt.conf
fi

