#include <unistd.h>

void	ft_print_numbers(void);

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
    printstr("Expect result : 0123456789\n");
    printstr("User   result : ");

	ft_print_numbers();
	printstr("\n");    	
	return (0);
}
