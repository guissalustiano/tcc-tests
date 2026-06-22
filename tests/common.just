gcc_src   := justfile_directory() + "/../../gcc"
build_dir := justfile_directory() + "/build"
prefix    := justfile_directory() + "/build/install"

configure:
    mkdir -p {{build_dir}}
    cd {{build_dir}} && {{gcc_src}}/configure \
        --target={{target}} \
        --prefix={{prefix}} \
        --enable-languages=c \
        --with-newlib

build:
    cd {{build_dir}} && make all-gcc -j$(nproc)

install:
    cd {{build_dir}} && make install-gcc
