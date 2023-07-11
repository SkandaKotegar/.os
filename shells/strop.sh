#!/bin/bash
s1=welcome
s2=to
s3=shell
s4=programming
echo -e "s1 : $s1\ns2 : $s2\ns3 : $s3\ns4 : $s4"
echo "Concatenated String : "
res=$s1" "$s2" "$s3" "$s4
echo $res
echo "Length of res string :"
echo ${#res}
s="hello_welcome_to_shell_programming"
echo "s : $s"
echo "substring starting with index 4 : "
echo "${s:4}"
echo "substring of length 10 starting with index 4 : "
echo ${s:4:10}
echo "Delete shortest substring from front strating with _ "
echo ${s#*_}
echo "Delete longest substring from front strating with _ "
echo ${s##*_}
echo "Delete shortest substring from front strating with _ "
echo ${s%_*}
echo "Delete longest substring from front strating with _ "
echo ${s%%_*}
