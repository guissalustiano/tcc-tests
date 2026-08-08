/* A value held live across a synthesized jump must survive it.

   sc1 has no auipc, so every unconditional jump -- a loop back edge, the
   branch over an else-block, the far leg of a synthesized ordered branch --
   becomes `lui t0, %hi(L); addi t0, t0, %lo(L); jalr x0, 0(t0)', and the
   indirect-jump, tablejump and call sequences hardcode t0/t1 the same way.
   None of that text is visible to the register allocator, and the patterns
   do not declare the clobber in their RTL, so with t0/t1 allocatable the
   allocator will keep a live value in one and have it silently overwritten.
   Found in Embench edn, where jpegdct kept an array offset in t0 across a
   loop back edge, spilled the jump target in its place and reloaded it as a
   wild pointer; fixed by reserving both as fixed on !TARGET_AUIPC.

   Catching that needs a value the allocator actually chooses to put in t0
   *and* keep there across a jump.  Short-lived temporaries will not do it:
   they get a register between two jumps and never notice.  pressure_loop
   below carries twenty-four accumulators through a loop whose body branches,
   which is enough live values to fill the register file, so several of them
   sit in scratch registers for the whole loop and cross the back edge and
   the else-skip jump on every iteration.  Verified against a build with the
   t0 reservation removed: correct at -O0, wrong at -O1, -O2, -O3 and -Os.  */

#define NACC 24                 /* even; twelve (first, second) pairs */

volatile int vmul   = 3;
volatile int vtrips = 12;       /* must be even -- see the closed form below */
volatile int vbase  = 3;

int src[NACC];
int out[NACC];
int arr[16];

/* Each pair (first, second) does `first -= second' on even iterations and
   `first += second' on odd ones, while `second' grows by one per iteration.
   Over one even/odd pair of iterations first changes by exactly +1, so after
   an even n:  first += n / 2,  second += n.  That closed form is what main
   checks, per accumulator, so a clobber of any single one is pinpointed
   rather than cancelling out in a checksum.

   The twenty-four accumulators are spelled out as separate variables on
   purpose: held in an array they would live in memory, the register file
   would never fill, and the loop would stop exercising anything.  */
__attribute__((noinline))
static void pressure_loop(int n) {
    int a0 = src[0],   a1 = src[1],   a2 = src[2],   a3 = src[3];
    int a4 = src[4],   a5 = src[5],   a6 = src[6],   a7 = src[7];
    int a8 = src[8],   a9 = src[9],   a10 = src[10], a11 = src[11];
    int a12 = src[12], a13 = src[13], a14 = src[14], a15 = src[15];
    int a16 = src[16], a17 = src[17], a18 = src[18], a19 = src[19];
    int a20 = src[20], a21 = src[21], a22 = src[22], a23 = src[23];

    for (int i = 0; i < n; i++) {
        if (i & 1) {            /* then-block ends in a synthesized jump */
            a0 += a1;   a2 += a3;   a4 += a5;   a6 += a7;
            a8 += a9;   a10 += a11; a12 += a13; a14 += a15;
            a16 += a17; a18 += a19; a20 += a21; a22 += a23;
        } else {
            a0 -= a1;   a2 -= a3;   a4 -= a5;   a6 -= a7;
            a8 -= a9;   a10 -= a11; a12 -= a13; a14 -= a15;
            a16 -= a17; a18 -= a19; a20 -= a21; a22 -= a23;
        }
        a1 += 1;  a3 += 1;  a5 += 1;  a7 += 1;
        a9 += 1;  a11 += 1; a13 += 1; a15 += 1;
        a17 += 1; a19 += 1; a21 += 1; a23 += 1;
    }

    out[0] = a0;   out[1] = a1;   out[2] = a2;   out[3] = a3;
    out[4] = a4;   out[5] = a5;   out[6] = a6;   out[7] = a7;
    out[8] = a8;   out[9] = a9;   out[10] = a10; out[11] = a11;
    out[12] = a12; out[13] = a13; out[14] = a14; out[15] = a15;
    out[16] = a16; out[17] = a17; out[18] = a18; out[19] = a19;
    out[20] = a20; out[21] = a21; out[22] = a22; out[23] = a23;
}

/* edn's own shape: an offset computed before a loop and used to index after
   it, with a variable-count shift in the body so each iteration runs a
   synthesized shift loop on top of the function loop's back edge.  */
__attribute__((noinline))
static int index_across_loop(int off, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += (int)((unsigned)arr[i & 15] >> ((unsigned)i & 3u));
    return sum + arr[off & 15];
}

int main(void) {
    int m = vmul;
    int n = vtrips;

    for (int i = 0; i < NACC; i++)
        src[i] = i * m + 1;

    pressure_loop(n);
    for (int i = 0; i < NACC; i++) {
        int expect = src[i] + ((i & 1) ? n : n / 2);
        if (out[i] != expect) return 1 + i;         /* 1..24 */
    }

    /* A handful of values held live across the variable-count shift loops,
       each rechecked against a fresh read of its volatile source so the
       comparison cannot be folded away.  */
    {
        int g1 = vmul * 3 + 1;
        int g2 = vmul * 5 + 2;
        int g3 = vmul * 7 + 3;
        unsigned sll = 0, srl = 0;
        int sra = 0;
        int t = vtrips * 4;                     /* 48 = six cycles of i & 7 */

        for (int i = 0; i < t; i++) {
            unsigned s = (unsigned)i & 7u;
            sll += 1u << s;                     /* variable SLL: synth loop */
            srl += 0x80000000u >> s;            /* variable SRL: synth loop */
            sra += -256 >> s;                   /* variable SRA: synth loop */
        }

        /* Six cycles of s = 0..7:  sum 1 << s = 6 * 0xFF = 1530,
           sum 0x80000000 >> s = 6 * 0xFF000000 = 0xFA000000 (mod 2^32),
           sum -256 >> s = 6 * -510 = -3060.  */
        if (sll != 1530u)          return 25;
        if (srl != 0xFA000000u)    return 26;
        if (sra != -3060)          return 27;
        if (g1 != vmul * 3 + 1)    return 28;
        if (g2 != vmul * 5 + 2)    return 29;
        if (g3 != vmul * 7 + 3)    return 30;
    }

    /* arr[i] = 7i, from a volatile multiplier so the contents stay opaque.
       Sum over i = 0..15 of (7i >> (i & 3)) is 348, and vbase 3 gives an
       offset of 12, so an intact offset adds arr[12] = 84.  */
    for (int i = 0; i < 16; i++)
        arr[i] = i * (m + 4);
    if (index_across_loop(vbase * 4, 16) != 432) return 31;

    return 0;
}
