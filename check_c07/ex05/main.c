#include <stdio.h>

char **ft_split(char *str, char *charset);

int main(void)
{
	char **strs;

	strs = ft_split("fsasfadsfsdfsbcxbcxbcxbbb", "abc");

	int i=0;
	while (strs[i])
		printf("%s\n",strs[i++]);
	return (0);
}
