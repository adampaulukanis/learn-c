#include <stdio.h>

/*
 * Copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 * version: 1
 *
 * 2025-03-27
 */
int main(void)
{
    int c;
    int prev = -1;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && prev == ' ') {
            prev = c;
        }
        if (c == ' ' && prev == ' ') {
            continue;
        } else {
        //if (c == ' ') { /* first time blank */
            prev = c;
        }
        prev = c;
        putchar(c);
    }

    return 0;
}
