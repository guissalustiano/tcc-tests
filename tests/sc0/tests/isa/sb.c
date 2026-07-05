/* sb/sh synthesized: addr&-4 → lw → clear bits → insert → sw */
__attribute__((noreturn)) void test_sb(volatile char  *p, int v) { *p = v; __builtin_unreachable(); }
__attribute__((noreturn)) void test_sh(volatile short *p, int v) { *p = v; __builtin_unreachable(); }
