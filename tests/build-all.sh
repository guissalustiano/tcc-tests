#!/usr/bin/env bash
# Build every rvscN toolchain, sequentially (8 cores, one target at a time).
#
#   sc0        binutils + gcc only -- no newlib (no jalr, so no crt0 -> main)
#   sc1..sc7   binutils + gcc + newlib + libgcc
#
# Idempotent: a target whose install tree already has the compiler (and libc,
# where one is expected) is skipped, so an interrupted run can just be re-run.
# Logs land in tests/build-logs/scN.log.
set -uo pipefail

cd "$(dirname "$0")"
LOGS="$PWD/build-logs"
mkdir -p "$LOGS"

done_already() {   # $1 = target number
    local d="sc$1" t="rvsc$1-unknown-elf"
    [ -x "$d/build/install/bin/$t-gcc" ] || return 1
    [ "$1" = 0 ] || [ -f "$d/build/install/$t/lib/libc.a" ] || return 1
    return 0
}

status=0
for n in 0 1 2 3 4 5 6 7; do
    d="sc$n"
    log="$LOGS/$d.log"

    if done_already "$n"; then
        echo "=== $d: already built, skipping"
        continue
    fi

    echo "=== $d: starting $(date -Is)"
    if [ "$n" = 0 ]; then
        recipes="configure-binutils build-binutils install-binutils configure build install"
    else
        recipes="setup"
    fi

    if (cd "$d" && just $recipes) >"$log" 2>&1; then
        echo "=== $d: ok $(date -Is)"
    else
        echo "=== $d: FAILED (see $log) $(date -Is)"
        status=1
    fi
done
echo "=== all done, status=$status $(date -Is)"
exit $status
