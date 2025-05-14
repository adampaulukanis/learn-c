#!/bin/ksh

#set -xe

# include assert lib
. ./assert.sh

# clean and make the program
rm -f ex1-12
make ex1-12

log_header "Test ./ex1-12"

# tests
function test_seven {
    STRING=" ONE    TWO  THREE   FOUR
FIVE
SIX
  SEVEN"
    actual=$(echo $STRING | ./ex1-12)
    expected="ONE
TWO
THREE
FOUR
FIVE
SIX
SEVEN"
    assert_eq "$actual" "$expected" "$0"
}

function test_hello {
    actual=$(echo -n "hello" | ./ex1-12)
    expected="hello"
    assert_eq "$actual" "$expected" "$0"
}

function test_tab {
    actual=$(echo -ne "\t" | ./ex1-12)
    expected=$(echo -ne "\n")
    assert_eq "$actual" "$expected" "$0"
}

function test_tabs {
    actual=$(echo -ne "\t \t\t" | ./ex1-12)
    expected=$(echo -ne "\n\n\n\n")
    assert_eq "$actual" "$expected" "$0"
}

function test_tabs2 {
    actual=$(echo -ne "\t \n\t\t" | ./ex1-12)
    expected=$(echo -ne "\n\n\n\n\n")
    assert_eq "$actual" "$expected" "$0"
}

# run tests
test_seven
test_hello
test_tab
test_tabs
test_tabs2
