#include <stdio.h>

/*
 * Exercise 1-6:
 * Verify that the expression getchar() != EOF is 0 or 1.
 */
int main(void)
{
    int c;
    printf("Input one letter: ");
    c = getchar() != EOF;
    if (c == 0)
        printf("it is EOF\n");
    else if (c == 1)
        printf("not EOF\n");
    else
        printf("i don't know what it was\n");
    return 0;
}
