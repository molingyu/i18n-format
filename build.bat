rmdir /s /q build
mkdir build
rmdir /s /q src/gen
mkdir src/gen
python .\gen\gen.py
cd build
cmake ..
cmake --build .
start i18n_format.sln