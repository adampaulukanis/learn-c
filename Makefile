CC=clang
CFLAGS=-g -Wall -Wextra -Werror
CPPFLAGS!=pkg-config --cflags cmocka
LIBS!=pkg-config --libs cmocka

all: tags tests \
	1.9-character-arrays \
	1.8-arguments \
	1.7-functions \
	1.6-arrays \
	1.5-character-input-and-output \
	1.4-temperature \
	1.3-temperature \
	1.2-temperature \
	1.1-first

tests: test-trimend test-reverse

test-trimend: test-trimend.c trimend.c
	$(CC) test-trimend.c trimend.c $(CFLAGS) $(CPPFLAGS) $(LIBS) -o test-trimend

test-reverse: test-reverse.c reverse.c
	$(CC) test-reverse.c reverse.c $(CFLAGS) $(CPPFLAGS) $(LIBS) -o test-reverse

1.9-character-arrays: 1.9-longest-line ex1-16 ex1-17 ex1-18 ex1-19

ex1-19: ex1-19.c reverse.c
	$(CC) ex1-19.c reverse.c $(CFLAGS) -o ex1-19

ex1-18: ex1-18.c trimend.c
	$(CC) ex1-18.c trimend.c $(CFLAGS) -o ex1-18

1.8-arguments: 1.8-power \
	1.8-fun-args-call-by-value

1.7-functions: 1.7-power ex1-15

1.6-arrays: 1.6-arrays ex1-13 ex1-14

1.5-character-input-and-output: 1.5.1-file-copying ex1-6 ex1-7 \
	1.5.2-character-counting \
	1.5.3-line-counting ex1-8 ex1-9 ex1-10 \
	1.5.4-word-counting ex1-12

1.4-temperature: 1.4-fahrenhrit-celsius

1.3-temperature: 1.3-fahrenheit-celsius 1.3-fahrenheit-celsius-reverse-order

1.2-temperature: 1.2-fahrenheit-celsius 1.2-printf-and-width 1.2-celsius-fahrenheit

tags:
	ectags -aR

clean:
	rm -rf 1.9-longest-line ex1-16 ex1-17 ex1-18 ex1-19
	rm -rf 1.8-power 1.8-fun-args-call-by-value
	rm -rf 1.7-power ex1-15
	rm -rf 1.6-arrays ex1-13 ex1-14
	rm -rf 1.5.4-word-counting ex1-12
	rm -rf 1.5.3-line-counting ex1-8 ex1-9 ex1-10
	rm -rf 1.5.1-file-copying ex1-6 ex1-7 1.5.2-character-counting
	rm -rf 1.4-fahrenhrit-celsius
	rm -rf 1.3-fahrenheit-celsius 1.3-fahrenheit-celsius-reverse-order
	rm -rf 1.2-celsius-fahrenheit 1.2-fahrenheit-celsius 1.2-printf-and-width
	rm -rf 1.1-first
	rm -rf a.out
	rm -rf test-trimend
