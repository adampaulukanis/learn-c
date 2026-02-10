#include <string.h>

#include "reverse.h"

void reverse(char string[])
{
    char temp;
    size_t sz = strlen(string);

    for (size_t i = 0; i < sz/2; ++i) {
	temp = string[i];
	    string[i] = string[sz-i-1];
	string[sz-i-1] = temp;
    }
}
