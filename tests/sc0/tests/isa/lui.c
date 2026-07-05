/* sc0: lui synthesized via constant pool — lw rd, %lo(pool)(x0), no lui emitted.
   Pool entries are placed at address < 2048 by the rvsc0 linker script.  */

__attribute__((noreturn)) void test_lui_const(void) {
    volatile unsigned r = 0xABCD0000u;  /* LUI_OPERAND: upper 20 bits set */
    __builtin_unreachable();
}

__attribute__((noreturn)) void test_lui_neg(void) {
    volatile int r = -65536;  /* 0xFFFF0000 — also a LUI_OPERAND */
    __builtin_unreachable();
}

__attribute__((noreturn)) void test_lui_high(void) {
    volatile unsigned r = 0x12345000u;  /* typical address constant */
    __builtin_unreachable();
}
