#!/bin/bash
echo "Enter a string : "
read s
echo "Reverse is : (using built in func) "
echo $s|rev
echo "Reverse is : (using looping) "
for((i=${#s}-1;i>=0;i--))
do
	r=$r${s:i:1}
done
echo $r
if [ $s = $r ]
then 
	echo "Palindrome "
else
	echo "NOT a Palindrome "
fi
