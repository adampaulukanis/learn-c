CC=cc
CFLAGS=-g -Wall -Wextra -Werror

all: first

first: first.c

clean:
	rm -rf *.core a.out
	rm -rf first
