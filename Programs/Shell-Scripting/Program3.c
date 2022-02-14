#!/bin/Sh
echo "Enter 3 numbers"
read n1
read n2
read n3
if [ $n1 -gt $n2 ]; then
    if [ $n1 -gt $n3 ]; then
        echo "$n1 is greatest"
    fi
elif [ $n2 -gt $n1 ]; then
    if [ $n2 -gt $n3 ]; then
        echo "$n2 is greatest"
    fi
elif [ $n3 -gt $n1 ]; then
    if [ $n3 -gt $n2 ]; then
        echo "$n3 is greatest"
    fi
else 
    echo "Enter valid values"
    exit 1
fi
exit 0
