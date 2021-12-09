#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int     main(void)
{
	char *retr;

	char str[255];

        char *str0 = "salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";
	
	printf("Expect result : 0 SALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN$\n");
        
	strcpy(str,str0);
	retr = ft_strupcase(str);
	printf("User   result : %d %s$\n",(int)(str-retr),str);

    	return (0);
}
