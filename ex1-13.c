/*
 * Write a program to print a histogram of the lengths of words in its input.
 * Horizontal position.
 *
 * Version: 1.
 */
#include <stdio.h>                      /* include standard IO */

#define TABSZ 1024       /* Lengths of words */

void printStars(size_t number)
{
    for (size_t i = 0; i < number; ++i)
    {
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int c, nc, max;
    nc = 0;
    max = 0;
    int tab[TABSZ] = { 0 };

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= 'z') {      /* TODO: replace it with eg.: isascii() or something */
            ++nc;
            if (nc > max) max = nc;     /* new max */
        } else if (c == ' ' || c == '\n' || c == '\t') {
            if (nc > 0) {               /* this word is finished */
                ++tab[nc];
            }
            nc = 0;
        } else {                        /* other characters like "#)(" */
        }
    }

    for (size_t i = 0; (int)i < max + 2; ++i) {
        printf("words with %2zi letters: ", i);
        printStars(tab[i]);
    }
    printf("max = %d\n", max);

    return 0;
}
