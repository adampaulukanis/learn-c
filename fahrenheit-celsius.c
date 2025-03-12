#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table using the formula
 * °C = (5/9)(°F-32)
 *
 * Version: 1.
 */
int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;              /* lower limit of temperature table */
    upper = 300;            /* upper limit */
    step  = 20;                /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius); /* %3.0f means that a floating-
                            point number (here fahr) is to be printed at least
                            three characters wide, with no decimal point and
                            no fraction digits.
                            %6.1f describes another number (celsius) that is
                            to be printed at least six characters wide, with 1
                            digit after the decimal point. */
        fahr = fahr + step;
    }

    return 0;
}
