#!/bin/sh
foo = 1
while [ "$foo" -le 10 ]
do
    echo "here we go again"
    foo = $foo(($foo+1))
done
exit 0
