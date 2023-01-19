#include <stdio.h>

int ft_str_is_numeric(char *str);

int     main(void)
{
	int ret1 = ft_str_is_numeric("");
	int ret2 = ft_str_is_numeric("A");
	int ret3 = ft_str_is_numeric("abcABc");
	int ret4 = ft_str_is_numeric("abcdf");
	int ret5 = ft_str_is_numeric("0");
	int ret6 = ft_str_is_numeric("a0A");
	int ret7 = ft_str_is_numeric("123");
	int ret8 = ft_str_is_numeric(" ");

	printf("Expect result : 1 1 1 0 0 0 0 0\n");
    	printf("User   result : %d %d %d %d %d %d %d %d\n",ret1,ret5,ret7,ret4,ret2,ret6,ret3,ret8);
	
    	return (0);
}
