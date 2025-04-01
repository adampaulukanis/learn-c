#include <stdio.h>

/*
 * Copy its input to its output,
 * replacing each tab by \t, each backspace by \b, and each backslash by \\.
 *
 * 2025-04-01
 */
int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t': // tab
                putchar('\\');
                putchar('t');
                break;
            case '\b':  // backspace
                putchar('\\');
                putchar('b');
                break;
            case '\\': // backslash
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
        }
    }

    return 0;
}
