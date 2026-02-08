#include <stdio.h>

#define MAXLINE 1000

int mygetline(char line[], int maxline);

/*
 * Write a program to print all input lines that are longer than 80 characters.
 */
int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = mygetline(line, MAXLINE)) > 0) {
	if (len > 80) {
	    printf("%d: %s", len, line);
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
    return i-1;
}
