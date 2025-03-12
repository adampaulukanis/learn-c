#include <stdio.h> /* include standard IO */

/* Define a function named *main* that receives no argument values */
int main(void)
{
    /*
     * A sequence of characters in double quotes is called a *character
     * string* or *string constant*.
     *
     * \n represents only a single character. It's an escape sequence.
     * There are others, like \t, \b, \", \\, \a...
     */
    printf("hello, świecie\n");

    printf("\a");
    printf("\b");
    printf("\c"); // error: unknown escape sequence
    printf("\d"); // error: unknown escape sequence
    printf("\e");
    printf("\z"); // error: unknown escape sequence

    return 0;
}
