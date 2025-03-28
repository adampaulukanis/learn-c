#!/bin/ksh
#set -n              # noexec
#set -v
#set -x              # xtrace PS4
#
# Found on the internet torokmark/assert.sh
#
BOLD=$(echo -en "\e[01m")
GREEN=$(echo -en "\e[32m")
MAGENTA=$(echo -en "\e[35m")
NORMAL=$(echo -en "\e[00m")
RED=$(echo -en "\e[31m")

log_header() {
    printf "\n${BOLD}${MAGENTA}=============== %s ===============${NORMAL}\n" "$@" >&2
}

log_success() {
    printf "${GREEN}pass %s${NORMAL}\n" "$@" >&2
}

log_failure() {
    printf "${RED}fail %s${NORMAL}\n" "$@" >&2
}

assert_eq() {
    typeset expected="$1"
    typeset actual="$2"
    typeset msg="${3-Error}"

    if [ "$expected" == "$actual" ] ; then
        return 0
    else
        log_failure "'$expected' == '$actual' :: $msg"
        return 1
    fi
}

assert_not_eq() {
    typeset expected="$1"
    typeset actual="$2"
    typeset msg="${3-Error}"

    if [ ! "$expected" == "$actual" ] ; then
        return 0;
    else
        log_failure "$expected != $actual :: $msg"
    fi
}
