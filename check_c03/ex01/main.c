#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int     main(void)
{
	int ret1,ret2,ret3,ret4,ret5,ret6,ret7;

	ret1 = strncmp("","",5);
	ret2 = strncmp("Abc","",0);
	ret3 = strncmp("Abc","Abc",2);
	ret4 = strncmp("abc","Abc",2);
	ret5 = strncmp("123","12345",4);
	ret6 = strncmp("123","12345",3);
	ret7 = strncmp("789","789",10);
	
    	printf("Real   result : %d %d %d %d %d %d %d\n",ret1,ret2,ret3,ret4,ret5,ret6,ret7);
	
	ret1 = ft_strncmp("","",5);
	ret2 = ft_strncmp("Abc","",0);
	ret3 = ft_strncmp("Abc","Abc",2);
	ret4 = ft_strncmp("abc","Abc",2);
	ret5 = ft_strncmp("123","12345",4);
	ret6 = ft_strncmp("123","12345",3);
	ret7 = ft_strncmp("789","789",10);
	
    	printf("User   result : %d %d %d %d %d %d %d\n",ret1,ret2,ret3,ret4,ret5,ret6,ret7);

    	return (0);
}