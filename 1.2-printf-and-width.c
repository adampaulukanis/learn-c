#include <stdio.h>

int main(void)
{
    int number = 17;
    float pi = 3.1415;

    printf("a decimal integer => %d\n", number);
    printf("a decimal integer, at least 6 characters wide => %6d\n", number);
    printf("a floating point => %f\n", pi);
    printf("a float point, at least 6 characters wide => %6f\n", pi);
    printf("a floating point, 2 characters after decimal point => %.2f\n", pi);
    printf("a floating point, at least 6 wide and 2 after decimal point => %6.2f\n", pi);

    // That's not all, check this out
    printf("octal => %o\n", number);
    printf("hexadecimal => %x\n", number);
    printf("character => %c\n", 'a');
    printf("character string => %s\n", "adam");
    printf("print %%\n");

    return 0;
}
