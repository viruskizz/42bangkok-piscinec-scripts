#include <stdio.h>

int ft_str_is_printable(char *str);	

int     main(void)
{
	int ret1 = ft_str_is_printable("");
	int ret2 = ft_str_is_printable("AaBb");
	int ret3 = ft_str_is_printable("12345aAbB");
	int ret4 = ft_str_is_printable("\n");
	int ret5 = ft_str_is_printable("\t");
	int ret6 = ft_str_is_printable("\xFF");
	int ret7 = ft_str_is_printable("0\0");
	int ret8 = ft_str_is_printable(" ");

	printf("Expect result : 1 1 1 1 1 0 0 0\n");
    	printf("User   result : %d %d %d %d %d %d %d %d\n",ret1,ret2,ret3,ret7,ret8,ret4,ret5,ret6);
	
   	return (0);
}
