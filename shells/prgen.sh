#!/bin/bash
read -p "Enter n :" n
if [ $n -lt 2 ]
then 
	echo "Invalid Input"
else
	for((i=2;i<=$n;i++))
	do
		f=1
		for((j=2;j<=$((i/2));j++))
		do
			if [ $((i%j)) -eq 0 ]
			then
				f=0
				break
			fi
		done
		if [ $f -eq 1 ]
		then
			echo -n " $i"
		fi
	done
	echo 
fi
