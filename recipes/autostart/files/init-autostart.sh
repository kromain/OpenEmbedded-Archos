#!/bin/sh

case "$1" in
  start)
	# Add your application startup commands here, e.g.:
	# export SOME_VAR=val
	# /path/to/myapplication myarg1 myarg2
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
