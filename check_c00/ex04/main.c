#include <unistd.h>

void	ft_is_negative(int n);

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
    printstr("Expect result : NPP\n");
    printstr("User   result : ");


	ft_is_negative(-10);
	ft_is_negative(0);
	ft_is_negative(10);
	printstr("\n");
    	return (0);
}
