#include <stdio.h>

/*
 * Count lines in input.
 *
 * The standard library ensures that an input text stream appears as a sequence
 * of lines, each terminated by a newline.
 */
int main(void)
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);

    return 0;
}
