#!/bin/ksh

# include assert lib
. ./assert.sh

# clean and make the program
rm -f 1.5.4-word-counting
make 1.5.4-word-counting

# preparations
TMPFILE=`mktemp /tmp/test.XXXXXXXXXXXXXXXXXX` || exit 1
/usr/bin/openssl rand -base64 4321 -out $TMPFILE

# main
set +A lineswordschars $(cat $TMPFILE |./1.5.4-word-counting)

# define tests
# tr " " "\0" replaces spaces with nothing
function test_lines {
    actual=${lineswordschars[0]}
    expected=$(cat $TMPFILE |wc -l |tr " " "\0")
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0" || log_failure "$0"
}

function test_words {
    actual=${lineswordschars[1]}
    expected=$(cat $TMPFILE |wc -w |tr " " "\0")
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0" || log_failure "$0"
}

function test_chars {
    actual=${lineswordschars[2]}
    expected=$(cat $TMPFILE |wc -c |tr " " "\0")
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0" || log_failure "$0"
}

# run tests
test_lines
test_words
test_chars
