#!/bin/ksh

rm -rf ex1-18
make ex1-18

# compare this and the output of this script
echo -n "\n" | ./ex1-18 | hexdump -C
echo -n "aa aa " | ./ex1-18 | hexdump -C
echo -n "bb bb\t" | ./ex1-18 | hexdump -C
echo -n "abcd       " | ./ex1-18 | hexdump -C
echo -n "abcd\t\t  \t" | ./ex1-18 | hexdump -C
echo -n "\t   x \tabcd\t\t  \t" | ./ex1-18 | hexdump -C
