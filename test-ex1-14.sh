#!/bin/ksh

#set -xe

# clean and make the program
FILETOTEST=ex1-14.c
rm -f ex1-14
make ex1-14

print
print print a histogram of the frequencies of different characters in its input
cat ${FILETOTEST} | ./ex1-14
