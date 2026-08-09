gcc_src            := justfile_directory() + "/../../gcc"
binutils_src       := justfile_directory() + "/../../binutils-gdb"
build_dir          := justfile_directory() + "/build"
binutils_build_dir := justfile_directory() + "/build-binutils"
prefix             := justfile_directory() + "/build/install"

# Full first-time setup: binutils → gcc → newlib → libgcc
setup: configure-binutils build-binutils install-binutils configure build install configure-newlib build-newlib install-newlib build-libgcc install-libgcc

configure-binutils:
    mkdir -p {{binutils_build_dir}}
    cd {{binutils_build_dir}} && {{binutils_src}}/configure \
        --target={{target}} \
        --prefix={{prefix}} \
        --disable-nls \
        --disable-gdb

build-binutils:
    cd {{binutils_build_dir}} && make -j$(nproc) CFLAGS="-g -O2 -Wno-error=free-nonheap-object"

install-binutils:
    cd {{binutils_build_dir}} && make install

configure:
    mkdir -p {{build_dir}}
    cd {{build_dir}} && PATH="{{prefix}}/bin:$PATH" {{gcc_src}}/configure \
        --target={{target}} \
        --prefix={{prefix}} \
        --enable-languages=c \
        --with-newlib \
        --disable-binutils \
        --disable-ld \
        --disable-gas

build:
    cd {{build_dir}} && make all-gcc -j$(nproc)

install:
    cd {{build_dir}} && make install-gcc

newlib_src      := justfile_directory() + "/../../newlib-src"
newlib_build_dir := justfile_directory() + "/build-newlib"

# --enable-newlib-io-c99-formats: newlib compiles the "hh" and "ll" length
# modifiers only under _WANT_IO_C99_FORMATS.  Without it printf("%hhd", 4105)
# prints 4105 instead of 9, which is a silent conformance gap rather than an
# error, and it is what kept gcc.c-torture's pr78622.c excluded.
configure-newlib:
    mkdir -p {{newlib_build_dir}}
    cd {{newlib_build_dir}} && PATH="{{prefix}}/bin:$PATH" {{newlib_src}}/configure \
        --target={{target}} \
        --prefix={{prefix}} \
        --disable-multilib \
        --disable-newlib-supplied-syscalls \
        --enable-newlib-io-c99-formats

build-newlib:
    cd {{newlib_build_dir}} && PATH="{{prefix}}/bin:$PATH" make -j$(nproc) CFLAGS_FOR_TARGET="-g -O1 -fno-builtin"

install-newlib:
    cd {{newlib_build_dir}} && PATH="{{prefix}}/bin:$PATH" make install

build-libgcc:
    cd {{build_dir}} && PATH="{{prefix}}/bin:$PATH" make all-target-libgcc -j$(nproc) CFLAGS_FOR_TARGET="-g -O1"

install-libgcc:
    cd {{build_dir}} && PATH="{{prefix}}/bin:$PATH" make install-target-libgcc
