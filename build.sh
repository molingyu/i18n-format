#!/usr/bin/env bash

rm -rf build
mkdir build
rmdir -rf src/gen
mkdir src/gen
python .\gen\gen.py
cd build
cmake -i18n_format_DOCS=OFF ..
cmake --build .