#!/bin/Sh
#Write a shell script to read the marks of a student in OS course and assign the grade.
#O - 85-100
#A - 75 - 84
#B - 60- 74
#C - 50 - 59
#F - 0 - 49
echo "Enter marks obtained in OS:"
read m
if [ $m -ge 85 ]; then
    if [ $m -le 100 ]; then
        echo "O Grade"
    fi
elif [ $m -ge 75 ]; then
    if [ $m -le 84 ]; then
        echo "A Grade"
    fi
elif [ $m -ge 60 ]; then
    if [ $m -le 74 ]; then
        echo "B Grade"
    fi
elif [ $m -ge 50 ]; then
    if [ $m -le 59 ]; then
        echo "C Grade"
    fi
elif [ $m -ge 0 ]; then
    if [ $m -le 49 ]; then
        echo "F Grade"
    fi    
else 
    echo "Not a valid grade"
    exit 1
fi
exit 0
