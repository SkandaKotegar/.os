#!/bin/bash

declare -A X
declare -A Y
declare -A Z

echo "Enter X :"
for((i=0;i<2;i++))
do
	for((j=0;j<2;j++))
	do
		read X[$i,$j]
	done
done

echo "Enter Y :"
for((i=0;i<2;i++))
do
	for((j=0;j<2;j++))
	do
		read Y[$i,$j]
	done
done

echo "Matrix X :"
for((i=0;i<2;i++))
do
	for((j=0;j<2;j++))
	do
		echo -n ${X[$i,$j]}
	done
	echo
done

echo "Matrix Y :"
for((i=0;i<2;i++))
do
	for((j=0;j<2;j++))
	do
		echo -n ${Y[$i,$j]}
	done
	echo
done

echo "Sum :"
for((i=0;i<2;i++))
do
	for((j=0;j<2;j++))
	do
		Z[$i,$j]=$((X[$i,$j]+Y[$i,$j]))
		echo -n ${Z[$i,$j]}
	done
	echo
done
