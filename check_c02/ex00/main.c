#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int     main(void)
{
	char dst[10];

	char *ret = ft_strcpy(dst,"abcdef");
	printf("Expect result : abcdef\n");
    	printf("User   result1: %s\n",dst);
    	printf("User   result2: %s\n",ret);
	
    	return (0);
}
