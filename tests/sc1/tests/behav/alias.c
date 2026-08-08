/* Adjacent sub-word objects sharing one word must not lose a store.

   With !TARGET_BYTE / !TARGET_HALF every byte and halfword access is
   synthesized as a read-modify-write of the enclosing aligned word.  The RTL
   that replaces the original insn still names only the byte object, so alias
   analysis used to trace the `and -4' back to two distinct base symbols,
   conclude the two accesses could not conflict, and sink both word loads
   above both word stores -- leaving whichever store ran second to write back
   its stale copy of its neighbour.  Found in Embench qrduino, whose initecc
   does `VERSION = vers; WD = 17 + 4 * vers;' on adjacent unsigned char
   globals and ended up with WD correct and VERSION zero.  Fixed by routing
   the synthesized word MEMs through riscv_subword_container_mem (alias set 0
   + MEM_VOLATILE_P), which keeps the sequences ordered against each other.

   Every expected value is read back from its volatile source rather than
   written as a literal the compiler already knows, so none of the checks can
   be folded away -- without that, the whole test compiles to `return 0' at
   -O1 and above.  The stores themselves are in noinline functions with no
   barrier between them, which is the shape the bug needs.  */

unsigned char A, B;
unsigned short H0, H1;

/* Four byte lanes guaranteed to share one word -- two plain globals are the
   qrduino shape, but nothing promises the linker puts them in the same word. */
struct quad { unsigned char a, b, c, d; };
struct quad Q;

volatile unsigned char src_b = 3;
volatile unsigned short src_h = 0x1234;

__attribute__((noinline))
static void set_pair(unsigned char v) {
    A = v;                              /* qrduino's initecc, verbatim */
    B = (unsigned char)(17 + 4 * v);
}

__attribute__((noinline))
static void set_halves(unsigned short v) {
    H0 = v;
    H1 = (unsigned short)(v + 1);
}

__attribute__((noinline))
static void set_quad(unsigned char v) {
    Q.a = v;
    Q.b = (unsigned char)(v + 1);
    Q.c = (unsigned char)(v + 2);
    Q.d = (unsigned char)(v + 3);
}

int main(void) {
    set_pair(src_b);
    if (A != src_b)                                  return 1;
    if (B != (unsigned char)(17 + 4 * src_b))        return 2;

    set_halves(src_h);
    if (H0 != src_h)                                 return 3;
    if (H1 != (unsigned short)(src_h + 1))           return 4;

    set_quad(src_b);
    if (Q.a != (unsigned char)(src_b))               return 5;
    if (Q.b != (unsigned char)(src_b + 1))           return 6;
    if (Q.c != (unsigned char)(src_b + 2))           return 7;
    if (Q.d != (unsigned char)(src_b + 3))           return 8;

    /* Rewrite one lane on its own: the other three must not be resurrected
       from a word image loaded before the rewrite.  */
    Q.b = (unsigned char)(src_b + 0x70);
    if (Q.a != (unsigned char)(src_b))               return 9;
    if (Q.b != (unsigned char)(src_b + 0x70))        return 10;
    if (Q.c != (unsigned char)(src_b + 2))           return 11;
    if (Q.d != (unsigned char)(src_b + 3))           return 12;

    return 0;
}
