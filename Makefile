CC=cc
CFLAGS=-g -Wall -Wextra -Werror

all: first temperature

temperature: fahrenheit-celsius printf-and-width celsius-fahrenheit

clean:
	rm -rf *.core a.out
	rm -rf first fahrenheit-celsius printf-and-width celsius-fahrenheit celsius-fahrenheit
