/* sc0: slt/sltu synthesized via sub/xor/and/lshr — no slt mnemonic emitted.
   Used internally by blt/bge/bltu/bgeu synthesis.  */
__attribute__((noreturn)) void test_slt (int a, int b)          { volatile int r = (a < b);  __builtin_unreachable(); }
__attribute__((noreturn)) void test_sltu(unsigned a, unsigned b) { volatile int r = (a < b); __builtin_unreachable(); }
__attribute__((noreturn)) void test_sgt (int a, int b)          { volatile int r = (a > b);  __builtin_unreachable(); }
__attribute__((noreturn)) void test_sle (int a, int b)          { volatile int r = (a <= b); __builtin_unreachable(); }
__attribute__((noreturn)) void test_sge (int a, int b)          { volatile int r = (a >= b); __builtin_unreachable(); }
