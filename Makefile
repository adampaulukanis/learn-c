CC=cc
CFLAGS=-g -Wall -Wextra -Werror

all: first fahrenheit-celsius

first: first.c

fahrenheit-celsius: fahrenheit-celsius.c

clean:
	rm -rf *.core a.out
	rm -rf first fahrenheit-celsius
