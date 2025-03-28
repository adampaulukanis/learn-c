#include <stdio.h>

/*
 * Count blanks (spaces), tabs and newlines.
 */
int main(void)
{
    int c;
    double b = 0;       /* blanks which are spaces */
    double t = 0;       /* tabs */
    double nl = 0;      /* newlines */

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++nl;
    }
    printf("blanks   = %.0f\n", b);
    printf("tabs     = %.0f\n", t);
    printf("newlines = %.0f\n", nl);

    return 0;
}
