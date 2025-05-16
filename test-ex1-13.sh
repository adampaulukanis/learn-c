#!/bin/ksh

#set -xe

# include assert lib
. ./assert.sh

# clean and make the program
rm -f ex1-13
make ex1-13
cat README.md | ./ex1-13
