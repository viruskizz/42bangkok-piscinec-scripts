#include <stdio.h>

void ft_putstr(char *str);

int     main(void)
{
    	printf("Expect result : abcdef\n");
    	printf("User   result : ");
	fflush(stdout);
	ft_putstr("abcdef");
	
	printf("\n");
    	return (0);
}
