int results[8];

int main(void) {
    int a = -1, b = 1;
    results[0] = (a < b) ? 1 : 0;          /* signed lt */
    results[1] = ((unsigned)a < (unsigned)b) ? 1 : 0; /* unsigned lt */
    results[2] = (b > a) ? 1 : 0;          /* signed gt */
    results[3] = (a <= a) ? 1 : 0;         /* signed le equal */
    results[4] = (b >= b) ? 1 : 0;         /* signed ge equal */
    results[5] = (0 < 1) ? 1 : 0;
    results[6] = (-2147483648 < 2147483647) ? 1 : 0;  /* INT_MIN < INT_MAX */
    results[7] = ((unsigned)0 - 1u > 0u) ? 1 : 0;     /* UINT_MAX > 0 */
    return results[0] + results[1] + results[2] + results[6];
}
