#!/usr/bin/ksh

usage()
{
  echo "Usage: javasrc [-d docdir] [-t title ] [ sourcedir, sourcedir, ... ]"
}

if [ $# -lt 1 ];
then
  usage
  exit 1
fi

docdir="."
title="JavaSrc"

while getopts "d:t:" opt; do
  case $opt in
    d) docdir=$OPTARG ;;
    t) title=$OPTARG ;;
    \?) usage
        exit 1
  esac
done
shift $(($OPTIND -1))

sourcedirs="$@"

#1.2:
#java -Xmx180m -cp "javasrc.jar" -Dtitle="$title" -Doutdir="$docdir" javasrc.app.JavaSrc $sourcedirs

#1.1: Put classes.zip and javasrc.jar into CLASSPATH
java -mx180m -Dtitle="$title" -Doutdir="$docdir" javasrc.app.JavaSrc $sourcedirs
