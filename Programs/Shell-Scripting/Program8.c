#!/bin/Sh
#Write a shell script to calculate the discount and final bill amount.
#amt <100 = 2%disc
#amt < 500 = 5% disc
#amt > 500 = 10% disc

echo "Enter the amount:"
read amount
if [ $amount -lt 100 ]; then
    amount=`expr $amount \- $amount \* 2 \/ 100`
    echo "The total bill amount after discount is: $amount"
elif [ $amount -lt 500 ]; then
    amount=`expr $amount \- $amount \* 5 \/ 100`
    echo "The total bill amount after discount is: $amount"
elif [ $amount -gt 500 ]; then
    amount=`expr $amount \- $amount \* 10 \/ 100`
    echo "The total bill amount after discount is: $amount"
else 
    echo "Not a valid bill "
    exit 1
fi
exit 0
