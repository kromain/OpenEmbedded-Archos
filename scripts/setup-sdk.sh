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
		chrpath -r $X86SYSROOTDIR/usr/lib $FILE
	fi
done

if [ -f $ARMSYSROOTDIR/usr/bin/qmake ]; then
	QMAKE=$ARMSYSROOTDIR/usr/bin/qmake
elif [ -f $X86SYSROOTDIR/usr/bin/qmake ]; then
	QMAKE=$X86SYSROOTDIR/usr/bin/qmake
else
	echo "Couldn't find qmake! Please contact the SDK packager."
	exit 1 
fi

QTVERSION=`$QMAKE -query QT_VERSION | cut -c 1`
SDKNAME=qt$QTVERSION

echo "Setting up Qt$QTVERSION..."

if  [ "$QTVERSION" = "5" ]; then
	echo "  * adjusting toolchain"

	$QMAKE -set CROSS_COMPILE arm-angstrom-linux-gnueabi-

	echo "  * adjusting sysroot and host prefix"

	echo "[Paths]"                        > $X86SYSROOTDIR/usr/bin/qt.conf
	echo "Sysroot=$ARMSYSROOTDIR"        >> $X86SYSROOTDIR/usr/bin/qt.conf
	echo "Prefix=/usr"                   >> $X86SYSROOTDIR/usr/bin/qt.conf
	echo "HostPrefix=$X86SYSROOTDIR/usr" >> $X86SYSROOTDIR/usr/bin/qt.conf
	
elif  [ "$QTVERSION" = "4" ]; then
	echo "  * adjusting qmake toolchain"

	$QMAKE -set QT_TOOLCHAIN_PREFIX arm-angstrom-linux-gnueabi-

	echo "  * adjusting qmake sysroot"

	sed -i -e "s,\$\$quote\(.*\),\$\$quote\($ARMSYSROOTDIR\)," $ARMSYSROOTDIR/usr/mkspecs/qconfig.pri

	echo "  * adjusting libraries install prefix"

	echo "[Paths]" > $ARMSYSROOTDIR/usr/bin/qt.conf
	echo "Prefix=$ARMSYSROOTDIR/usr" >> $ARMSYSROOTDIR/usr/bin/qt.conf

	echo "  * fixing symlinks"

	ln -f -s $ARMSYSROOTDIR/usr/bin/qmake $X86SYSROOTDIR/usr/bin/qmake
	ln -f -s $ARMSYSROOTDIR/usr/bin/qt.conf $X86SYSROOTDIR/usr/bin/qt.conf	
else
	echo "Unsupported Qt version!"
	exit 1
fi

echo "Done, your SDK is now ready to use!"

