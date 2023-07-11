#!/bin/bash
s1=welcome
s2=to
s3=shell
s4=programming
ar=($s1 $s2 $s3 $s4)
len=${#arr[@]}
echo "Length of : $len"
echo "Array  : "
for((i=0;i<len;i++))
do
	echo -n ${arr[i]}
done

