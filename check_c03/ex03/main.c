#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int     main(void)
{
	char str[300];

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",0));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",0));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",6));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",6));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABC",6));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABC",6));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",3));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",3));

	strcpy(str,"Add empty.");
    	printf("Real   result : %s\n",strncat(str,"",3));
	strcpy(str,"Add empty.");
    	printf("User   result : %s\n",ft_strncat(str,"",3));

	strcpy(str,"");
    	printf("Real   result : %s\n",strncat(str,"",3));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strncat(str,"",3));

    	return (0);
}
