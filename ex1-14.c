/*
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 *
 * Version: 2
 * Date: 2025-06-04
 */
#include <stdio.h>                      /* include standard IO */
#include <ctype.h>

#define ILELITER 128

static int freqs[ILELITER] = { 0 };

/*
 * Function is used only to print some stars (*) and a number of them.
 */
void printStars(size_t number)
{
    for (size_t i = 0; i < number; ++i)
    {
        printf("*");
    }
    printf(" (%zu)\n", number);
}

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (isascii(c)) {
            freqs[c] += 1;
        } else {
            printf("Error: I got some strange character (%c)\n", c);
        }
    }

    for (size_t i = 0; i < ILELITER; i++) {
        if (freqs[i] > 0) {
            printf("%c: ", (char)i);
            printStars(freqs[i]);
        }
    }

    return 0;
}
