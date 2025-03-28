#!/bin/ksh

make ex1-8
echo "There should be 6 blanks, 4 tabs and 3 newlines."
echo  "a b cd  e\txz\t\t\nadam\nhello\thow are you?" | ./ex1-8
