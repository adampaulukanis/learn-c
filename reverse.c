#include <string.h>

#include "reverse.h"

void reverse(char string[])
{
    char old;
    size_t sz = strlen(string);

    for (size_t i = 0; i < sz/2; ++i) {
	old = string[i];
	    string[i] = string[sz-i-2]; /* There is -2 because the last character
					   is \n and I want it to stay like that */
	string[sz-i-2] = old;
    }
}
