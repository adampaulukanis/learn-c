CC=cc
CFLAGS=-g -Wall -Wextra -Werror

all: 1.1-first 1.2-temperature

1.2-temperature: 1.2-fahrenheit-celsius 1.2-printf-and-width 1.2-celsius-fahrenheit

clean:
	rm -rf *.core a.out
	rm -rf 1.1-first
	rm -rf 1.2-celsius-fahrenheit 1.2-fahrenheit-celsius 1.2-printf-and-width
