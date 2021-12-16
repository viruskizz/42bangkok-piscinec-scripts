#!/bin/sh
# Compile C with error check arument
# Author Araiva
#
if [ -z $1 ]
then
  	echo "need $1=main file argument"
  	exit 0
fi

main=$1
if [ -z $2 ]
then
  	### if only single argument run the rush script
  	gcc -Wall -Werror -Wextra main.c ft_putchar.c $main   && ./a.out
else
  	### if use 2 argument run the test and exercise file
  	file=$2
  	gcc -Wall -Werror -Wextra $main $file && ./a.out
fi