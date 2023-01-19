#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int     main(void)
{
	int ret1,ret2,ret3,ret4,ret5,ret6,ret7;

	ret1 = strcmp("","");
	ret2 = strcmp("Abc","");
	ret3 = strcmp("Abc","Abc");
	ret4 = strcmp("abc","Abc");
	ret5 = strcmp("123","312");
	ret6 = strcmp("","24");
	ret7 = strcmp("789","789");
	
    	printf("Real   result : %d %d %d %d %d %d %d\n",ret1,ret2,ret3,ret4,ret5,ret6,ret7);
	
	ret1 = ft_strcmp("","");
	ret2 = ft_strcmp("Abc","");
	ret3 = ft_strcmp("Abc","Abc");
	ret4 = ft_strcmp("abc","Abc");
	ret5 = ft_strcmp("123","312");
	ret6 = ft_strcmp("","24");
	ret7 = ft_strcmp("789","789");
	
    	printf("User   result : %d %d %d %d %d %d %d\n",ret1,ret2,ret3,ret4,ret5,ret6,ret7);

    	return (0);
}
