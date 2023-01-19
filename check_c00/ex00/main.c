#include <unistd.h>

void    ft_putchar(char c);

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
    int i;

    printstr("Expect result : 0123456789\n");
    printstr("User   result : ");

    i = '0';
    while (i <= '9')
    {
        ft_putchar(i);
        i++;
    }
    ft_putchar('\n');
    return (0);
}
