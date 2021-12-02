#include <stdio.h>

int 	ft_strlen(char *str);
int     main(void)
{
	int len = ft_strlen("0123456789");
	
    	printf("Expect result : 10\n");
    	printf("User   result : %d\n",len);
    	return (0);
}

