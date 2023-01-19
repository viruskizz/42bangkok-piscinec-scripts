#include <stdio.h>

int ft_str_is_alpha(char *str);

int     main(void)
{
	int ret1 = ft_str_is_alpha("");
	int ret2 = ft_str_is_alpha("A");
	int ret3 = ft_str_is_alpha("abcABc");
	int ret4 = ft_str_is_alpha("abcdf");
	int ret5 = ft_str_is_alpha("0");
	int ret6 = ft_str_is_alpha("a0A");
	int ret7 = ft_str_is_alpha("123");
	int ret8 = ft_str_is_alpha(" ");

	printf("Expect result : 1 1 1 1 0 0 0 0\n");
    	printf("User   result : %d %d %d %d %d %d %d %d\n",ret1,ret2,ret3,ret4,ret5,ret6,ret7,ret8);
	
    	return (0);
}
