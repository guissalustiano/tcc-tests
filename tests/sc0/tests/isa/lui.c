/* sc0: lui synthesized via addi/add — the 20-bit immediate is split into
   two 10-bit halves and built with shifts, no lui and no memory access.  */

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

__attribute__((noreturn)) void test_lui_general(void) {
    volatile unsigned r = 0x12345678u;  /* nonzero low 12 bits: needs a
                                            trailing addi after the split */
    __builtin_unreachable();
}
