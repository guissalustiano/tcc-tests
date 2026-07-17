/* Board support for rvscN code-size measurement.

   The three rvsc size targets (rvsc1, rvsc2, and the reference rv32i
   toolchain) only ever link these benchmarks to measure static code size;
   nothing is executed, so the timing triggers are empty stubs.

   SPDX-License-Identifier: GPL-3.0-or-later */

#include <support.h>

void
initialise_board ()
{
}

void __attribute__ ((noinline)) __attribute__ ((externally_visible))
start_trigger ()
{
}

void __attribute__ ((noinline)) __attribute__ ((externally_visible))
stop_trigger ()
{
}
