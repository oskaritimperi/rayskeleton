#!/bin/sh

if [ ! -f bootstrap.sh ]; then
    echo "bootstrap.sh must be run from the project root directory"
    exit 1
fi

mkdir -p build
cd build
cmake -DBOOTSTRAP=ON -DCMAKE_INSTALL_PREFIX=stage .
cmake --build . --target raylib
cmake -UBOOTSTRAP .
