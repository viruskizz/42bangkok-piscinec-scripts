#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int     main(void)
{
	char str[300];

	strcpy(str,"");
    	printf("Real   result : %s\n",strcat(str,"ABCdef"));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strcat(str,"ABCdef"));

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strcat(str,"ABCdef"));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strcat(str,"ABCdef"));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strcat(str,"ABCdef"));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strcat(str,"ABCdef"));

	strcpy(str,"Add empty.");
    	printf("Real   result : %s\n",strcat(str,""));
	strcpy(str,"Add empty.");
    	printf("User   result : %s\n",ft_strcat(str,""));

	strcpy(str,"");
    	printf("Real   result : %s\n",strcat(str,""));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strcat(str,""));

    	return (0);
}
