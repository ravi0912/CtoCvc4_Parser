#!/bin/bash
#python c_to_cvc4.py $1 $2 $3
echo $#
if [ $# -eq 3 ]
then
	python c_to_cvc4.py $1 $2 $3
	l=$1
	l=${l%.*}
	l="$l.cvc4"
	echo $l
	cvc4 $l
	exit 1
else
	echo "Read the Readme file for proper commands and argument"
fi

