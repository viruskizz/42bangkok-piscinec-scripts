#include <unistd.h>

void	ft_print_comb2(void);

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
    printstr("Expect result : 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99\n");
    printstr("User   result : ");

	ft_print_comb2();
	printstr("\n");
    	return (0);
}
