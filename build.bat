rmdir /s /q build
mkdir build
cd build
cmake ..
cmake --build .
start i18n_format.sln