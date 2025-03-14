CC=cc
CFLAGS=-g -Wall -Wextra -Werror

all: 1.1-first 1.2-temperature 1.3-temperature 1.4-temperature

1.2-temperature: 1.2-fahrenheit-celsius 1.2-printf-and-width 1.2-celsius-fahrenheit

1.3-temperature: 1.3-fahrenheit-celsius 1.3-fahrenheit-celsius-reverse-order

1.4-temperature: 1.4-fahrenhrit-celsius

clean:
	rm -rf a.out
	rm -rf 1.1-first
	rm -rf 1.2-celsius-fahrenheit 1.2-fahrenheit-celsius 1.2-printf-and-width
	rm -rf 1.3-fahrenheit-celsius 1.3-fahrenheit-celsius-reverse-order
	rm -rf 1.4-fahrenhrit-celsius
