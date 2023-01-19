if [ -f "a.out" ] ; then
	rm a.out
fi
Norminette -R CheckForbiddenSourceHeader $1 $2
gcc -Wall -Wextra -Werror $1 $2 main.c
./a.out | cat -e

