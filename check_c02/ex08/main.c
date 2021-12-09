#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int     main(void)
{
	char *retr;

	char str[255];

        char *str0 = "salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";
	
	printf("Expect result : 0 salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un$\n");
        
	strcpy(str,str0);
	retr = ft_strlowcase(str);
	printf("User   result : %d %s$\n",(int)(str-retr),str);

    	return (0);
}
