#!/bin/sh

case "$1" in
  start)
	# Add your application startup commands here, e.g.:
	export QT_QPA_EGLFS_DEPTH=16
	/opt/BouncyMallow/BouncyMallow -platform EGLFS -plugin LinuxInputMouse 2> /opt/BouncyMallow/stderr.log
	;;
  stop)	
	# Add your application shutdown commands here, e.g.:
	# killall myapplication
	;;
  restart)
	$0 stop
	$0 start
	;;
  *)
	echo "usage: $0 { start | stop | restart }" >&2
	exit 1
	;;
esac

exit 0
