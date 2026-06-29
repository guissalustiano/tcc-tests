int results[4];

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
    results[0] = fib(10);
    results[1] = sum(3, 5, 7);
    results[2] = get_sum()(10, 20, 30);  /* indirect call */
    results[3] = fib(7) + fib(8);
    return results[0];
}
