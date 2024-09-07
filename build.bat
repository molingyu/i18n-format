rmdir /s /q build
mkdir build
rmdir /s /q src/gen
mkdir src/gen
python .\gen\gen.py
cd build
cmake .. -G "MinGW Makefiles"  -DCMAKE_BUILD_TYPE="Debug"
cmake --build .