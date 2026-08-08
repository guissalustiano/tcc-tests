/* Sub-word loads and stores through every lane of a word.

   sc1 has none of lb/lbu/lh/lhu/sb/sh: each is synthesized as an access to
   the enclosing aligned word plus a shift and a mask.  The lane index picks
   both the shift amount and the mask, so each of the four byte lanes and
   each of the two halfword lanes is a distinct code path.  Two variants of
   each are exercised: a compile-time-constant lane, where the synthesis may
   fold the offset, and a lane taken from a volatile index, where it must be
   computed at run time from `addr & 3' / `addr & 2'.

   The union pins the lanes down -- nothing promises a bare char array is
   word-aligned, and without that the "lane" a constant index selects is not
   actually known.  Stored values come from volatile sources so the compiler
   cannot fold a load back into the store that produced it, while the
   expected values are literals, so each check is a real assertion about the
   synthesized sequence and not a comparison of two runs of the same path. */

union word_lanes {
    unsigned int   w[2];
    unsigned char  b[8];
    unsigned short h[4];
};

union word_lanes u;

volatile unsigned char  bsrc[4] = { 0x12, 0x80, 0xFF, 0x7F };
volatile unsigned short hsrc[2] = { 0x1234, 0x8000 };
volatile int idx[4] = { 0, 1, 2, 3 };

int main(void) {
    /* ---- byte store + unsigned load, all four constant lanes ---- */
    u.w[0] = 0;
    u.b[0] = bsrc[0];
    u.b[1] = bsrc[1];
    u.b[2] = bsrc[2];
    u.b[3] = bsrc[3];
    if (u.b[0] != 0x12u) return 1;
    if (u.b[1] != 0x80u) return 2;
    if (u.b[2] != 0xFFu) return 3;
    if (u.b[3] != 0x7Fu) return 4;

    /* ---- byte signed load, all four constant lanes ---- */
    if ((signed char)u.b[0] !=   18) return 5;
    if ((signed char)u.b[1] != -128) return 6;
    if ((signed char)u.b[2] !=   -1) return 7;
    if ((signed char)u.b[3] !=  127) return 8;

    /* Each store touched exactly its own lane: the word is all four. */
    if (u.w[0] != 0x7FFF8012u) return 9;

    /* ---- byte store + load through a run-time lane index ---- */
    u.w[0] = 0;
    u.b[idx[0]] = bsrc[3];
    u.b[idx[1]] = bsrc[2];
    u.b[idx[2]] = bsrc[1];
    u.b[idx[3]] = bsrc[0];
    if (u.b[idx[0]] != 0x7Fu) return 10;
    if (u.b[idx[1]] != 0xFFu) return 11;
    if (u.b[idx[2]] != 0x80u) return 12;
    if (u.b[idx[3]] != 0x12u) return 13;
    if ((signed char)u.b[idx[1]] !=   -1) return 14;
    if ((signed char)u.b[idx[2]] != -128) return 15;
    if (u.w[0] != 0x1280FF7Fu) return 16;

    /* ---- halfword store + load, both constant lanes ---- */
    u.w[0] = 0;
    u.h[0] = hsrc[0];
    u.h[1] = hsrc[1];
    if (u.h[0] != 0x1234u) return 17;
    if (u.h[1] != 0x8000u) return 18;
    if ((signed short)u.h[0] !=   0x1234) return 19;
    if ((signed short)u.h[1] != -32768)   return 20;
    if (u.w[0] != 0x80001234u) return 21;

    /* ---- halfword store + load through a run-time lane index ---- */
    u.w[0] = 0;
    u.h[idx[0]] = hsrc[1];
    u.h[idx[1]] = hsrc[0];
    if (u.h[idx[0]] != 0x8000u) return 22;
    if (u.h[idx[1]] != 0x1234u) return 23;
    if ((signed short)u.h[idx[0]] != -32768) return 24;
    if (u.w[0] != 0x12348000u) return 25;

    /* ---- lanes reached through a pointer, not an index ---- */
    u.w[0] = 0;
    {
        unsigned char *p = &u.b[0];
        p[0] = bsrc[0];
        p[1] = bsrc[1];
        p[2] = bsrc[2];
        p[3] = bsrc[3];
        if (p[0] != 0x12u) return 26;
        if (p[1] != 0x80u) return 27;
        if (p[2] != 0xFFu) return 28;
        if (p[3] != 0x7Fu) return 29;
    }

    /* A pointer whose value the compiler cannot see, landing on lane 1: the
       byte position has to be recovered at run time from `addr & 3', and the
       shift amounts differ from every case above.  */
    u.w[0] = 0;
    {
        unsigned char *volatile pp = &u.b[1];
        unsigned char *p = pp;
        p[0] = bsrc[2];
        p[1] = bsrc[3];
        p[2] = bsrc[0];
        if (p[0] != 0xFFu) return 30;
        if (p[1] != 0x7Fu) return 31;
        if (p[2] != 0x12u) return 32;
        if (u.b[0] != 0x00u) return 33;   /* untouched lane must stay zero */
        if (u.w[0] != 0x127FFF00u) return 34;
    }

    /* ---- neighbouring word must never be disturbed ---- */
    u.w[0] = 0;
    u.w[1] = 0;
    u.b[3] = bsrc[2];
    u.b[4] = bsrc[3];
    if (u.w[0] != 0xFF000000u) return 35;
    if (u.w[1] != 0x0000007Fu) return 36;

    return 0;
}
