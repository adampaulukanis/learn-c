#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table.
 */
int main(void)
{
    int fahr;

    /*
     * for loop is made of three parts:
     * 1. initialization: faht = 0, done only once, before the loop is entered.
     * 2. test: fahr <= 300, if test is true, the body of the loop is executed.
     * 3.increment step: fahr += 20 (below written in longer form), is executed
     *                                       and the condition is re-evaluated.
     * The loop terminates if the condition has become false.
     */
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;
}
