#!/bin/bash
echo "Enter the Array : "
read -a arr
max=0
echo "Array  : ${arr[*]}"
for i in ${arr[*]}
do
	if [ $i -gt $max ]
	then
		max=$i
	fi
done
echo "Max : $max"
