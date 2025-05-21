/*
 * Write a program to print a histogram of the lengths of words in its input.
 * Horizontal position.
 *
 * Version: 1.
 */
#include <stdio.h>                      /* include standard IO */
#include <string.h>

#define TABSZ 100       /* Lengths of words */

void printStars(size_t number)
{
    for (size_t i = 0; i < number; ++i)
    {
        printf("*");
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "ERROR: %s needs 2 parameters: horiz or vert\n", argv[0]);
        return 1;
    }
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

    if (strcmp(argv[1], "horiz") == 0) {
        for (size_t i = 0; (int)i < max + 2; ++i) {
            printf("words with %2zi letters: ", i);
            printStars(tab[i]);
        }
    } else if (strcmp(argv[1], "vert") == 0) {
        printf("length  0123456789012345\n");
        printf("-----------------------\n");
        for (int y = max; y > 0; --y) {
            for (int x = 0; x < max + 2; ++x) {
                if (x == 0) printf("%7d:", y);
                if (tab[x] >= y) printf("*");
                else  printf(" ");
            }
            printf("\n");
        }
        printf("-----------------------\n");
        printf("length  0123456789012345\n");
    } else {
        fprintf(stderr, "ERROR: %s needs ONLY THESE 2 parameters: horiz or vert\n", argv[0]);
        return 1;
    }

    return 0;
}
