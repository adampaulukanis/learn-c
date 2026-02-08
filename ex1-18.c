#include <stdio.h>
#include <ctype.h>

#include "trimend.h"

#define MAXLINE 1000

int mygetline(char line[], int maxline);

/*
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 */
int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = mygetline(line, MAXLINE)) > 0) {
	if (!(line[0] == '\n')) {
	    len = trimend(line);
	    (void) len; /* not needed */
	    printf("%s", line);
	}
    }

    return 0;
}

// TODO: refactor + tests
// To test this I had to move it to a file and include it
int mygetline(char line[], int maxline)
{
    int c, i;

    for (i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
	line[i] = c;
    }
    if (c == '\n') {
	line[i] = c;
	++i;
    }
    line[i] = '\0';
    return i;
}
