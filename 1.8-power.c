#include <stdio.h>

int power(int base, int n);

/* test power function */
int main(void)
{
    printf("i\t  2^i\t   -3^i\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\t% 4d\t% 6d\n",
                i,
                power(2, i),
                power(-3, i));
    }

    return 0;
}

/* power: raise base to n-th power; n>=0; version 2 */
int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n) {
        p *= base;
    }

    return p;
}
