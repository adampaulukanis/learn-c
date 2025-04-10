#!/bin/ksh

# include assert lib
. ./assert.sh

# make my program
make ex1-9

log_header "Test ./ex1-9"

# define tests
test1() {
    teststring=" a b   c       d "
    actual=$(print "$teststring" | ./ex1-9)
    expected=" a b c d "
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test2() {
    teststring=" test2"
    actual=$(print "$teststring" | ./ex1-9)
    expected=" test2"
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test3() {
    teststring="     test3"
    actual=$(print "$teststring" | ./ex1-9)
    expected=" test3"
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test4() {
    teststring="test4              "
    actual=$(print "$teststring" | ./ex1-9)
    expected="test4 "
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test5() {
    teststring="Test5"
    actual=$(print "$teststring" | ./ex1-9)
    expected="Test5"
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test6() {
    teststring=""
    actual=$(print "$teststring" | ./ex1-9)
    expected=""
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test7() {
    teststring=" "
    actual=$(print "$teststring" | ./ex1-9)
    expected=" "
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test8() {
    teststring="     "
    actual=$(print "$teststring" | ./ex1-9)
    expected=" "
    assert_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "\"$teststring\""
    fi
}

test9() {
    teststring="fail"
    actual=$(print "$teststring" | ./ex1-9)
    expected="FAIL"
    assert_not_eq "$actual" "$expected"
    if [ "$?" == 0 ] ; then
        log_success "it fails and its ok \"$teststring\""
    else
        log_failure "lipa wyszla kierowniczku kochanienki"
    fi
}

# run tests
test1
test2
test3
test4
test5
test6
test7
test8
test9
