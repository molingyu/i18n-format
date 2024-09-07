#!/usr/bin/env bash

rm -rf build
mkdir build
rm -rf src/gen
mkdir src/gen
python ./gen/gen.py
cd build
cmake -DCMAKE_BUILD_TYPE="Debug" ..
cmake --build .