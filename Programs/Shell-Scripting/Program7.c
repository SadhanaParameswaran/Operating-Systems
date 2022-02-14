#!/bin/Sh
#Write a shell script to implement a simple calculator which has the four basic operations:
#Addition, Subtraction, Multiplication and Division.
echo "Enter two numbers: "
read n1
read n2
echo "Enter which operation: 1. Addition:A; 2. Subtraction:S; 3. Multiplication:M; 4. Division:D"
read op
if [ $op = "A" ]; then
    res=`expr $n1 \+ $n2`
    echo "The ans is $res"
elif [ $op = "S" ]; then
    res=`expr $n1 \- $n2`
    echo "The ans is $res"
elif [ $op = "M" ]; then
    res=`expr $n1 \* $n2`
    echo "The ans is $res"
elif [ $op = "D" ]; then
    res=`expr $n1 \/ $n2`
    echo "The ans is $res"
else 
    echo "Not a valid operand"
    exit 1
fi
exit 0
