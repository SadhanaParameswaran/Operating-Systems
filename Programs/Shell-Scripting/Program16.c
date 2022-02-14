#!/bin/sh
# calculate sum of even number upto n (use for loop)
echo "Enter number: "
read n
while [ "$n" -eq 0 ]
do
    sq=`expr $n \* $n`
    echo "the square of number is: $sq"
done
exit 0
