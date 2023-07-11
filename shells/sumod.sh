#!/bin/bash
read -p "Enter a number : " n
while ((n!=0))
do
	d=$((n%10))
	s=$((s+d))
	n=$((n/10))
done
echo "Sum of Digits : $s"

