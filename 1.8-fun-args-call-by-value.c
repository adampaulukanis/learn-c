#include <stdio.h>
#include <assert.h>

/* In C, all functions arguments are passed by "value". */

void myfunction(int number)
{
    printf("Provided number is %d.\n", number);
    /* Now I will try to change the value of variable number */
    number = 18;
}

/*
 * But for arrays, the story is different.
 * When the name of an array is used as an argument, the value passed
 * to the function is the location or address of the beginning of the
 * array -- there is no copying of array elements.
 */
void mysecondfunction(int myarr[], size_t sz)
{
    myarr[1] = 2026;
    for (size_t i=0; i<sz; i++) {
        printf("myarr[%zu] = %d\n", i, myarr[i]);
    }
}

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;

    /* Will mynum be changed? */
    int mynum = 17;
    assert(mynum == 17);
    myfunction(mynum);
    assert(mynum == 17);

    /* Now test the argument as an array */
    int arr[] = { 1, 2, 77 };
    mysecondfunction(arr, 3);
    assert(arr[1] == 2026);

    return 0;
}
