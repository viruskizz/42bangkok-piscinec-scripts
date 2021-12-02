#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int     main(void)
{
	char *retr;

	char str[255];

        char *str0 = "salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";
	
	printf("Expect result : 0 Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un$\n");
        
	strcpy(str,str0);
	retr = ft_strcapitalize(str);
	printf("User   result : %d %s$\n",(int)(str-retr),str);

    	return (0);
}
