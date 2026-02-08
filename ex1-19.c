#include <stdio.h>

#include "reverse.h"

#define MAXLINE 1000

int mygetline(char line[], int maxline);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = mygetline(line, MAXLINE)) > 0) {
	if (!(line[0] == '\n')) {
	    reverse(line);
	    printf("%s", line);
	}
    }

    return 0;
}

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
