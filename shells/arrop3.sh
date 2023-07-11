#!/bin/bash
arr=(1 2 3 49 5)
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
