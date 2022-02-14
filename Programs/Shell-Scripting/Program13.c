#!/bin/sh
echo "Is it morning? Please answer yes or no"
read timeofday
case "$timeofday" in
yes) echo "Good morning";;
y) echo "Good morning";;
no) echo "Good afternoon";;
n) echo "Good afternoon";;
yes) echo "Good morning";;
* ) echo "Sorry, answer not recognized";;
esac
exit 0
