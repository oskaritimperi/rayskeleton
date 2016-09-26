# rayskeleton

A simple to use and build skeleton project for raylib. Uses CMake.

# Building and running in 6 easy steps

The commands here will bootstrap your rayskeleton project with it's own raylib
instance (and all of its dependencies). Raylib is automatically downloaded and
built by the bootstrap script.

    $ git clone git@github.com:oswjk/rayskeleton.git
    $ cd rayskeleton
    $ ./bootstrap.sh
    $ cd build
    $ make
    $ ./src/rayskeleton

# Building and running with a prebuilt/installed raylib

If you have built raylib yourself and want to use the same local raylib
installation for multiple projects, you can easily do that by setting the
LOCAL_RAYLIB CMake variable. The variable must point to a directory where you
have installed raylib (i.e., it contains bin, lib, include, etc.)

In this example I have built raylib in a directory at the same level as
rayskeleton, using a build directory named `build` and installed raylib under
the build directory in a directory named `stage`.

    $ git clone git@github.com:oswjk/rayskeleton.git
    $ cd rayskeleton
    $ mkdir build
    $ cd build
    $ cmake -DCMAKE_INSTALL_PREFIX=stage -DLOCAL_RAYLIB=../raylib/build/stage ..
    $ make
    $ ./src/rayskeleton
