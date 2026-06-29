int neq(int a, int b) {
    if (a != b) return 1;
    return 0;
}

int blt(int a, int b, int x, int y)  { if (a <  b) return x; return y; }
int bge(int a, int b, int x, int y)  { if (a >= b) return x; return y; }
int bltu(unsigned a, unsigned b, int x, int y) { if (a <  b) return x; return y; }
int bgeu(unsigned a, unsigned b, int x, int y) { if (a >= b) return x; return y; }
