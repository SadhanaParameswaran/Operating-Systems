#!/bin/Sh
#calc bill amt
#amt <100 = 2%disc
#amt < 500 = 5% disc
#amt > 500 = 10% disc

echo "Enter the amount:"
read amount
if [ $amount -lt 100 ]; then
    amount = `expr $amount \* 0.02`
elif [ $amount -lt 500 ]; then
    amount = `expr $amount \* 0.05`
elif [ $amount -gt 500 ]; then
    amount = `expr $amount \* 0.1`
else 
    echo "Not a valid bill "
    exit 1
fi
exit 0
