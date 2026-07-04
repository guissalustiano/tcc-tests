int main(void) {
    int a = -1, b = 1;
    if (!(a < b))                       return 1;  /* signed lt */
    if ((unsigned)a < (unsigned)b)      return 2;  /* UINT_MAX is NOT < 1 */
    if (!(b > a))                       return 3;  /* signed gt */
    if (!(a <= a))                      return 4;  /* le equal */
    if (!(b >= b))                      return 5;  /* ge equal */
    if (!(0 < 1))                       return 6;
    if (!(-2147483648 < 2147483647))    return 7;  /* INT_MIN < INT_MAX */
    if (!((unsigned)0 - 1u > 0u))      return 8;  /* UINT_MAX > 0 */
    return 0;
}
