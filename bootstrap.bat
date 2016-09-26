mkdir build
cd build
cmake -DBOOTSTRAP=ON -DCMAKE_INSTALL_PREFIX=stage .
cmake --build . --target raylib
cmake -UBOOTSTRAP .
