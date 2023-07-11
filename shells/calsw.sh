#!/bin/sh
read -p "Enter 1st number : " a
read -p "Enter 2nd number : " b
read -p "Enter operation : " c
case "$c" in 
	"+") echo "Result is `expr $a + $b`" 
	;;
	"-") echo "Result is `expr $a - $b`" 
	;;
	"*") echo "Result is `expr $a \* $b`" 
	;;
	"/") echo "Result is `expr $a / $b`" 
	;;
esac

