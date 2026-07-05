/* bne synthesized: sub t,a,b; beq t,x0,skip; beq x0,x0,target */
__attribute__((noreturn)) void test_neq(int a, int b) { volatile int r = (a != b); __builtin_unreachable(); }

/* blt/bge/bltu/bgeu synthesized via slt/sltu + beq */
__attribute__((noreturn)) void test_blt (int a, int b)          { volatile int r = 0; if (a <  b) r = 1; __builtin_unreachable(); }
__attribute__((noreturn)) void test_bge (int a, int b)          { volatile int r = 0; if (a >= b) r = 1; __builtin_unreachable(); }
__attribute__((noreturn)) void test_bltu(unsigned a, unsigned b) { volatile int r = 0; if (a <  b) r = 1; __builtin_unreachable(); }
__attribute__((noreturn)) void test_bgeu(unsigned a, unsigned b) { volatile int r = 0; if (a >= b) r = 1; __builtin_unreachable(); }
