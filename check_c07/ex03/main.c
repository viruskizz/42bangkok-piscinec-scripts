#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv)
{
	char *strs[10];
	char *str;
	int	i;

	strs[0] = "abc";
	strs[1] = "def";
	strs[2] = "";
	strs[3] = "m";
	strs[4] = "badfsfsaf";

	i = 3;
	if (argc>1)
	{
		i = argv[1][0] - '0';
	}

	str = ft_strjoin(i,strs, " x ");
	printf("%s\n",str);
	free(str);
	return 0;
}
