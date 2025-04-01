# include assert lib
. ./assert.sh

# make my program
make clean
make ex1-10

log_header "Test ./ex1-10"

# define tests
function test_one_tab {
    # if function defined this way (with function keyword), than
    # $0 contains the name of this function
    teststring="\t\t"
    actual=$(print "$teststring" | ./ex1-10)
    expected=$(printf "%s%s" "\\t\\t")
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0"
}

function test_multiple_tabs {
    teststring=" \t a b   c \t  \t  d "
    actual=$(print "$teststring" | ./ex1-10)
    expected=" \t a b   c \t  \t  d "
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0"
}

function test_one_backspace {
    teststring="ab\b"
    actual=$(print "$teststring" | ./ex1-10)
    expected="ab\b"
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0"
}

function test_multiple_backspace {
    teststring="\bab\b\b"
    actual=$(print "$teststring" | ./ex1-10)
    expected="\bab\b\b"
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0"
}

function test_one_backslash {
    teststring="\\"
    actual=$(print "$teststring" | ./ex1-10)
    expected="\\\\"
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0"
}

function test_multiple_backslash {
    teststring="\\z\\b\\ d\\\\\\"
    actual=$(print "$teststring" | ./ex1-10)
    expected="\\\\z\b\\\\ d\\\\\\\\"
    assert_eq "$actual" "$expected"
    [ "$?" == 0 ] && log_success "$0"
}

# run tests
test_one_tab
test_multiple_tabs
test_one_backspace
test_multiple_backspace
test_one_backslash
test_multiple_backslash
