#include <stdio.h>

void ft_putstr_non_printable(char *str);

int     main(void)
{
	printf("Expect result : Coucou\\0atu \\09vas\\08 bien\\80\\ff \\7f?\\01\n");
    	printf("User   result : ");
	fflush(stdout);
	ft_putstr_non_printable("Coucou\ntu \tvas\x8 bien\x80\xFF \x7F?\1");
	printf("\n");
	
   	return (0);
}
