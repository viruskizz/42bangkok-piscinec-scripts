#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int     main(void)
{
	char str[300];
	int len;

	// 10 : 123
	strcpy(str,"123");
	len = strlcat(str,"ABCdefgh",2);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"123");
	len = ft_strlcat(str,"ABCdefgh",2);
    	printf("User   result : %d %s\n",len,str);

	// 10 : "1234AB"
	strcpy(str,"1234");
	len = strlcat(str,"ABCdef",7);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"1234");
	len = ft_strlcat(str,"ABCdef",7);
    	printf("User   result : %d %s\n",len,str);
	
	// 10 : "1234ABCde"
	strcpy(str,"1234");
	len = strlcat(str,"ABCdef",10);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"1234");
	len = ft_strlcat(str,"ABCdef",10);
    	printf("User   result : %d %s\n",len,str);

	// 6 : ""
	strcpy(str,"");
	len = strlcat(str,"ABCdef",0);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"");
	len = ft_strlcat(str,"ABCdef",0);
    	printf("User   result : %d %s\n",len,str);

	// 6 : ABCde
	strcpy(str,"");
	len = strlcat(str,"ABCdef",6);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"");
	len = ft_strlcat(str,"ABCdef",6);
    	printf("User   result : %d %s\n",len,str);

	// 4 : 1234
	strcpy(str,"1234");
	len = strlcat(str,"",5);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"1234");
	len = ft_strlcat(str,"",5);
    	printf("User   result : %d %s\n",len,str);

    	return (0);
}
