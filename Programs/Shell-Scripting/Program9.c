#!/bin/Sh
#Write a shell script to calculate the time difference in seconds 
#when two time values are provided in hh:mm:ss format.
echo "Enter the first time "
echo "Hour: "
read h1
echo "Minutes: "
read m1
echo "Seconds: "
read s1
echo "Enter the second time "
echo "Hour: "
read h2
echo "Minutes: "
read m2
echo "Seconds: "
read s2
Hour1=`expr $h1 \* 3600`
Hour2=`expr $h2 \* 3600`
Min1=`expr $m1 \* 60`
Min2=`expr $m2 \* 60`
Second1=$(expr $Hour1 + $Min1 + $s1)
Second2=$(expr $Hour2 + $Min2 + $s2)
if [ $Second1 -ge $Second2 ]; then
    TimeDiff=$(expr $Second1 - $Second2)
else
    TimeDiff=$(expr $Second2 - $Second1)
fi 
echo "The time difference is $TimeDiff seconds"
max=10
for(( i=2; i<=$max; ++i ))
    do
        echo "$i"
    done
    
max=10
for i in `seq 2 $max`
    do
        echo "$i"
    done

for i in {2..10}
    do
        echo "output: $i"
    done
