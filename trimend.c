#include "trimend.h"

int trimend(char line[])
{
    int size = strlen(line);
    int newsize=size-1; // TODO: why -1?
    for (; newsize>=0; --newsize) {
	if (line[newsize] == ' ' || line[newsize] == '\t') {
	    continue;
	}
	else break;
    }
    newsize+=1; // TODO: why +1?
    line[newsize] = '\0';
    return newsize;
}
