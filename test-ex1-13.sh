#!/bin/ksh

#set -xe

# clean and make the program
FILETOTEST=README.md
rm -f ex1-13
make ex1-13

print
print Print a histogram of the lengths of words in ${FILETOTEST} with the bars horizontal
cat ${FILETOTEST} | ./ex1-13 horiz

print
print Print a histogram of the lengths of words in ${FILETOTEST} with the bars vertical
cat ${FILETOTEST} | ./ex1-13 vert

print
print Should give an error
cat ${FILETOTEST} | ./ex1-13 kaszanka
