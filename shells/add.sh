#!/bin/sh
echo "Enter 1st number : "
read a
echo "Enter 2nd number : "
read b
c=`expr $a + $b`
echo "Sum is $c"

