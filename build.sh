#!/bin/bash
set -e

function build {
  cd $1
  echo "build $1 $2"
  ant $2 >& /dev/null
  if [ $? -eq 0 ]
  then
    echo "success"
  else
    echo "fail"
  fi
  cd $PETABLOX_BENCH
}

build boofcv/benchmarks
build ashesJSuite/benchmarks/jpat-p
mkdir -p cache4j/lib
build cache4j release
build contest/account
build contest/airlinestickets
build contest/bubblesort
build contest/bubblesort2
build contest/bufwriter
build contest/manager
build contest/mergesort
build contest/pingpong
build contest/shop
build contest/sunsaccount
build dacapo/benchmarks/antlr
build dacapo/benchmarks/avrora
build dacapo/benchmarks/batik
build dacapo/benchmarks/bloat
build dacapo/benchmarks/chart
build dacapo/benchmarks/fop
build dacapo/benchmarks/hsqldb
build dacapo/benchmarks/luindex
build dacapo/benchmarks/lusearch
build dacapo/benchmarks/pmd
build dacapo/benchmarks/sunflow
build dacapo/benchmarks/xalan
build elevator
mkdir -p ftp/classes
build ftp
build java_grande/moldyn
build java_grande/montecarlo
build java_grande/raytracer
build sor
build tsp
build weblech-0.0.3
pushd jspider; ./compile.sh; popd
pushd hedc; ./compile.sh; popd
