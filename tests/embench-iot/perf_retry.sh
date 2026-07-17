#!/usr/bin/env bash
# Re-run the sc1 benchmarks that timed out, with NO time limit, in parallel.
set -euo pipefail
E=/home/salust/p/scgcc/tests/embench-iot
CC=/home/salust/p/scgcc/tests/sc1/build/install/bin/rvsc1-unknown-elf-gcc
LD=/home/salust/p/scgcc/tests/sc1/pk32.ld
ISA=rv32imac_zicsr_zifencei
CF="-O2 -ffreestanding -std=gnu11 -I$E/support -I$E/config/rvsc -DWARMUP_HEAT=0 -DGLOBAL_SCALE_FACTOR=1"
SUP="$E/support/main.c $E/support/beebsc.c $E/config/rvsc/boardsupport.c"
BENCHES="aha-mont64 huffbench nettle-sha256 picojpeg qrduino"
WORK=$(mktemp -d)
OUT=$E/perf_retry_results.txt
: > "$OUT"

echo "[build] linking sc1 ELFs..."
for b in $BENCHES; do
  d="$WORK/$b"; mkdir -p "$d"
  objs=""
  for s in $SUP $E/src/$b/*.c; do
    o="$d/$(basename "$s").o"
    $CC -c $CF "$s" -o "$o"
    objs="$objs $o"
  done
  $CC -O2 $objs -T "$LD" -lsim -lm -o "$d/b.elf" 2>/dev/null
  echo "[build] $b done"
done

run_one(){
  local b=$1 d="$WORK/$1"
  local start=$SECONDS
  spike -g --isa=$ISA "$PK" "$d/b.elf" >/dev/null 2>"$d/hist.txt"
  local n
  n=$(awk '/^[0-9a-f]+ [0-9]+$/{s+=$2} END{print s}' "$d/hist.txt")
  echo "$b sc1=$n  (${SECONDS}s, since_start=$((SECONDS-start))s)" | tee -a "$OUT"
}
export -f run_one
export WORK PK ISA

echo "[run] launching ${BENCHES} in parallel (no timeout)..."
pids=""
for b in $BENCHES; do run_one "$b" & pids="$pids $!"; done
wait $pids
echo "[done] all finished. Results in $OUT:"
cat "$OUT"
