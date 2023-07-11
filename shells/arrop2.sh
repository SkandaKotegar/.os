#!/bin/bash
echo "Array  : $*"
max=0
for i in $*
do
	if [ $i -gt $max ]
	then
		max=$i
	fi
done
echo "Max : $max"
