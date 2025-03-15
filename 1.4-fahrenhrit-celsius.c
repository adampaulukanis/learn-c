#include <stdio.h>

/*
 * The quantities LOWER, UPPER and STEP are symbolic constants, not variables,
 * so they do not appear in declarations. Symbolic constants names are
 * conventionally written in upper case so they can be readily distinguished
 * from lower case variable names.
 * Notice that there is no semicolon at the end of a #define line.
 */
#define     LOWER   0       /* lower limit of table */
#define     UPPER   300     /* upper limit */
#define     STEP    20      /* step size */

/*
 * Print Fahrenhei-Celsius table.
 */
int main(void)
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}
