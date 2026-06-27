gcc_src            := justfile_directory() + "/../../gcc"
binutils_src       := justfile_directory() + "/../../binutils-gdb"
build_dir          := justfile_directory() + "/build"
binutils_build_dir := justfile_directory() + "/build-binutils"
prefix             := justfile_directory() + "/build/install"

configure-binutils:
    mkdir -p {{binutils_build_dir}}
    cd {{binutils_build_dir}} && {{binutils_src}}/configure \
        --target={{target}} \
        --prefix={{prefix}} \
        --disable-nls \
        --disable-gdb \
        --disable-binutils

build-binutils:
    cd {{binutils_build_dir}} && make -j$(nproc)

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
