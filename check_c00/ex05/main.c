#include <unistd.h>

void	ft_print_comb(void);

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
    printstr("Expect result : 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789\n");
    printstr("User   result : ");

	ft_print_comb();
	printstr("\n");
    	return (0);
}
