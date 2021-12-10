# Automate test C06 only
# Author Araiva
#
#Helper
c_red="\033[1;31m"
c_blue="\033[1;34m"
c_green="\033[1;32m"
c_reset="\033[m"
seperator(){
	echo "$c_green========= $1 =========$c_reset"	
	echo "Evaluating file\t: $2"
	echo "Start testing file"
}
gcc_runner(){
	gcc -Werror -Wall -Wextra $1 -o $2
}

# SETUP
if [[ -z $1 ]]
then
	echo "need evaluate c06 directory"
fi
TEST_DIR=$1

# RUNNER
echo "$c_red...Araiva Testing Suite...$c_reset"

## Check Norminette
echo ""
echo "$c_green>> Checking Norminette <<$c_reset"
norminette -R CheckforbiddenSourceHeader $1/*/ft*
echo ">> Done <<"
echo ""

ex="ex00"
fullpath="$TEST_DIR/$ex/ft_print_program_name.c"
if [ -f  $fullpath ]
then
	seperator $ex $fullpath
	gcc_runner $fullpath test.out
	echo ">> Expect: "
	echo "./test.out"
	echo "<< Result: "
	./test.out
	echo "";
fi

ex="ex01"
fullpath="$TEST_DIR/$ex/ft_print_params.c"
if [ -f  $fullpath ]
then
	seperator $ex $fullpath
	gcc_runner $fullpath test.out
	echo ">> Expect: "
	echo "test1"	
	echo "test2"	
	echo "test3"	
	echo "<< Result:"
   	./test.out test1 test2 test3
	echo "";
fi

ex="ex02"
fullpath="$TEST_DIR/$ex/ft_rev_params.c"
if [ -f  $fullpath ]
then
	seperator $ex $fullpath
	gcc_runner $fullpath test.out
	echo ">> Expect: \ntest3\ntest2\ntest1"
	echo "<< Result:"
	./test.out test1 test2 test3
	echo "";
fi

ex="ex03"
fullpath="$TEST_DIR/$ex/ft_sort_params.c"
if [ -f  $fullpath ]
then
	seperator $ex $fullpath
	gcc_runner $fullpath test.out
	echo ">> Expect:"
	echo "H"
	echo "Z"
	echo "ab"
	echo "ac"
	echo "gga"
	echo "z"
	echo "<< Result:"
	./test.out z ab ac Z H gga
	echo ""
fi
