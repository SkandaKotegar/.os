#!/bin/bash
n=$1
echo "$1"
if [ $1 -eq 1 ]
then
	echo "Neither prime nor composite "
else
	f=1
	for((i=2;i<$((n/2));i++))
	do
		if [ $((n%i)) -eq 0 ]
		then
			f=0
			break
		fi
	done
	if [ $f -eq 1 ]
	then
		echo "Prime"
	else
		echo "Composite"
	fi
fi
