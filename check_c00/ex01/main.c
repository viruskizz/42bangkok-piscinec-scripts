#include <unistd.h>

void	ft_print_alphabet(void);

int     len(char *str)
{
    int     i;
    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

void    printstr(char *str)
{
    write(1, str, len(str));
}

int     main(void)
{
	printstr("Expect result : abcdefghijklmnopqrstuvwxyz\n");
    	printstr("User   result : ");

	ft_print_alphabet();

    	printstr("\n");
    	return (0);
}
