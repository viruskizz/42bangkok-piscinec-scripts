#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *str;

	str = ft_convert_base("5647","0123456789","0123456789ABCDEF");
	printf("%s\n",str);
}
