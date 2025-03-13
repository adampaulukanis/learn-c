#include <stdio.h>

/*
 * celsius-fahrenheit:
 * a program to print the corresponding Celsius to Fahrenheit table.
 * Formula: °F = (°C × 9/5) + 32
 */
int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;              /* lower limit of temperature table */
    upper = 100;            /* upper limit */
    step  = 5;             /* step size */

    celsius = lower;

    printf("Formula: °F = (°C × 9/5) + 32\n");


    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%5.0f %5.0f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
