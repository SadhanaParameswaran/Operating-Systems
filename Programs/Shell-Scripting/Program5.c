#!/bin/sh
#Write a shell script to read 3 numbers and find the greatest of the 3 numbers.
echo "Enter 3 numbers: "
echo "number 1: "
read n1
echo "number 2: "
read n2
echo "number 3: "
read n3
if [ $n1 -gt $n2 ]; then
    if [ $n1 -gt $n3 ]; then
        echo "$n1 is the greatest number"
    else
        echo "$n3 is the greatest number"
    fi
elif [ $n2 -gt $n3 ]; then
    echo "$n2 is the greatest number"
else 
    echo "$n3 is the greatest number"
fi
exit 0
