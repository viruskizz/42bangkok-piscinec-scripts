#include <unistd.h>

void	ft_putnbr(int nb);

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
    	printstr("Expect result :\n"); 
	printstr("-2147483648\n");
	printstr("-12345\n");
	printstr("0\n");
	printstr("123456789\n");
	printstr("2147483647\n");
    	printstr("User   result :\n");

	ft_putnbr(-2147483648);
	printstr("\n");
	
	ft_putnbr(-12345);
	printstr("\n");
	
	ft_putnbr(0);
	printstr("\n");
	
	ft_putnbr(123456789);
	printstr("\n");
	
	ft_putnbr(2147483647);
    	printstr("\n");
    
    return (0);
}
