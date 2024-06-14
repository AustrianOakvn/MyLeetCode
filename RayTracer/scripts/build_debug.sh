#!/bin/bash

if test -d ./build; then
  echo "Build directory exist"
  rm -r build
  mkdir build && cd build
fi

cmake .. -D CMAKE_BUILD_TYPE=DEBUG
make
./raytracer > image.ppm

