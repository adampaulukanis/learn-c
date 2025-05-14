/*
 * Write a program that prints its input one word per line.
 *
 * version: 1
 */
#include <stdio.h>
int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            printf("\n");
        else
            printf("%c", c);
    }

    return 0;
}
