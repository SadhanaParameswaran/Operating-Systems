#!/bin/sh
#switch case, add, sub, etc
echo "Enter two numbers: "
read n1
read n2
echo "Enter a number corresponding an operand: +>add ->subtract *>product />divide "
read op
case "$op" in
+) echo `expr $n1 + $n2`;;
-) echo `expr $n1 - $n2`;;
\) echo `expr $n1 \ $n2`;;
/) echo `expr $n1 \/ $n2`;;
* ) echo "Sorry, invalid operand";;
esac
exit 0
