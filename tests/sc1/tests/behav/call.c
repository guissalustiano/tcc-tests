static int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

static int sum(int a, int b, int c) {
    return a + b + c;
}

static int (*get_sum(void))(int, int, int) {
    return sum;
}

int main(void) {
    if (fib(10) != 55)               return 1;
    if (sum(3, 5, 7) != 15)          return 2;
    if (get_sum()(10, 20, 30) != 60) return 3;
    if (fib(7) + fib(8) != 34)       return 4;
    return 0;
}
