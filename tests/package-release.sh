#!/usr/bin/env bash
# Package each built rvscN toolchain into a stripped tar.xz for a GitHub release.
#
# The install trees are ~2 GB each, almost all of it debug symbols in cc1 and
# the binutils programs.  Stripping brings a target down to tens of megabytes,
# which is what a release asset should be; anyone who needs symbols builds from
# source with `just setup`.
set -euo pipefail

cd "$(dirname "$0")"
OUT="$PWD/release"
rm -rf "$OUT"
mkdir -p "$OUT"

host=$(uname -m)-linux
gccver=$(ls sc1/build/install/lib/gcc/rvsc1-unknown-elf/ | head -1)

for n in 0 1 2 3 4 5 6 7; do
    src="sc$n/build/install"
    [ -d "$src" ] || { echo "skip sc$n: not built"; continue; }

    name="rvsc$n-unknown-elf-gcc$gccver-$host"
    stage="$OUT/$name"
    cp -a "$src" "$stage"

    # Strip every ELF executable and shared object in the tree.  Static target
    # libraries (libc.a, libgcc.a) are left alone: stripping them would remove
    # the symbols the linker resolves against.
    find "$stage" -type f -perm -u+x -exec sh -c \
        'file -b "$1" | grep -q "^ELF" && strip --strip-unneeded "$1" 2>/dev/null' _ {} \; || true

    tar -C "$OUT" -cJf "$OUT/$name.tar.xz" "$name"
    rm -rf "$stage"
    echo "$(du -h "$OUT/$name.tar.xz" | cut -f1)	$name.tar.xz"
done

( cd "$OUT" && sha256sum *.tar.xz > SHA256SUMS )
echo "assets in $OUT"
