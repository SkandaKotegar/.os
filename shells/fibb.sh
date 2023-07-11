#!/bin/bash
read -p "Enter n : " n
if [ $n -eq 1 ]
then 
	echo " 0 "
elif [ $n -eq 2 ]
then
	echo " 0 1 "
else
	a1=0
	a2=1
	echo -n " $a1 $a2"
	for((i=3;i<=$n;i++))
	do
		a3=$((a1+a2))
		echo -n " $a3"
		a1=$a2
		a2=$a3
	done
fi
echo
