#!/usr/bin/env bash

rm -rf build
mkdir build
cd build
cmake -i18n_format_DOCS=OFF ..
cmake --build .