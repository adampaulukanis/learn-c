#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table using the formula
 * °C = (5/9)(°F-32)
 *
 * Version: 0.
 */
int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;              /* lower limit of temperature table */
    upper = 300;            /* upper limit */
    step  = 20;                /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9; /* This is important, because 5 and 9
        are integers, so 5/9 would be truncated to zero and so all the
        Celsius temperatures would be reported as zero. */
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
