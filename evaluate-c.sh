# Automate Test C
# Author  Araiva
#
# Ruuner

c_red="\033[1;31m"
c_blue="\033[1;34m"
c_green="\033[1;32m"
c_reset="\033[m"

echo "$c_red...Araiva TESTING SUITE...$c_reset"
echo "main directory: $1"
echo "test directory: $2"

TEST_FILE_NAME=main.c

if [[ -z $1 || -z $2 ]]
then
	  echo ">> need \$1=testing_path and \$2=evaluating_argument"
	    exit 0
fi

t_path=$1
e_path=$2

## Check Norminette
echo ""
echo ">> Checking norminette <<"
norminette -R CheckForbiddenSourceHeader $2/*/ft*
echo ">> Done <<"
echo ""

TEST_FILES=$(find $t_path -name $TEST_FILE_NAME | sort -d)

for f in $TEST_FILES;
do
  	ex=$(cut -d '/' -f2 <<< "$f")
  	t_file=$(find "$t_path" -name $TEST_FILE_NAME | grep "$ex")  
  	e_file=$(find "$e_path" -name ft_*.c | grep "$ex")  

  	echo "$c_green======= $ex ========$c_reset"
  	if [ -f "$e_file" ]
  	then
  	  	echo "Evaluating file\t: $e_file"
  	else
  	  	echo "Evaluating file is not existed"
  	fi
  	if [ -f "$t_file" ]
  	then
  	  	echo "Testing file\t: $t_file"
  	else
  	  	echo "Testing file is not existed"
  	fi
  	if [[ -f "$t_file" && -f "$e_file" ]]
  	then
  	  	echo ""$c_blue"Start testing... $c_reset"
  	  	gcc -Wall -Werror -Wextra $t_file $e_file -o bot_eva_test.out && ./bot_eva_test.out
  	fi
  	echo "\n"
done
#clear file

if [ -f "bot_eva_test.out" ]
then
  	rm bot_eva_test.out
fi

# DONE the program
