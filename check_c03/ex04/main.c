#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int     main(void)
{
	char str[300];

	strcpy(str,"");
    	printf("Real   result : %s\n",strstr(str,""));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strstr(str,""));

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strstr(str,"ABCdef"));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strstr(str,"ABCdef"));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strstr(str," "));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strstr(str," "));

	strcpy(str,"Test empty.");
    	printf("Real   result : %s\n",strstr(str,"empty. "));
	strcpy(str,"Test empty.");
    	printf("User   result : %s\n",ft_strstr(str,"empty. "));

	strcpy(str,"ABCd");
    	printf("Real   result : %s\n",strstr(str,"C"));
	strcpy(str,"ABCd");
    	printf("User   result : %s\n",ft_strstr(str,"C"));

    	return (0);
}
