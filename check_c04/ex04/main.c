#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

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
    	printstr("Expect result :-2147483648\n"); 
    	printstr("User   result :");
	ft_putnbr_base(-2147483648,"0123456789");
    	printstr("\nExpect result :\n"); 
    	printstr("User   result :");
	ft_putnbr_base(123,"01+3456789");
	ft_putnbr_base(123,"01234-6789");
	ft_putnbr_base(123,"0");
	ft_putnbr_base(-123,"012+456789");
	ft_putnbr_base(-123,"0123-56789");
	ft_putnbr_base(123,"0123436789");
	ft_putnbr_base(-123,"0023456789");
	ft_putnbr_base(-123,"0123456780");
    	printstr("\nExpect result :-7852516351\n"); 
    	printstr("User   result :");
	ft_putnbr_base(-2147483648,"9876543210");
    	printstr("\nExpect result :-20000000000\n"); 
    	printstr("User   result :");
	ft_putnbr_base(-2147483648,"01234567");
    	printstr("\nExpect result :-80000000\n"); 
    	printstr("User   result :");
	ft_putnbr_base(-2147483648,"0123456789aBcDeF");
    	printstr("\nExpect result :-12aBcDeF\n"); 
    	printstr("User   result :");
	ft_putnbr_base(-0x12ABCDEF,"0123456789aBcDeF");
    	printstr("\nExpect result :-1010101101010100101010110101010\n"); 
    	printstr("User   result :");
	ft_putnbr_base(-0x55AA55AA,"01");
    	printstr("\nExpect result :17777777777\n"); 
    	printstr("User   result :");
	ft_putnbr_base(2147483647,"01234567");
    	printstr("\nExpect result :7852516352\n"); 
    	printstr("User   result :");
	ft_putnbr_base(2147483647,"9876543210");
    	printstr("\nExpect result :12340\n"); 
    	printstr("User   result :");
	ft_putnbr_base(625+25*5*2+25*3+5*4,"01234");
    	printstr("\nExpect result :bhhhhhhhhhh\n"); 
    	printstr("User   result :");
	ft_putnbr_base(2147483647,"abcdefgh");
    	printstr("\nExpect result :7fffffff\n"); 
    	printstr("User   result :");
	ft_putnbr_base(2147483647,"0123456789AbCdEf");
    	printstr("\nExpect result :1111111111111111111111111111111\n"); 
    	printstr("User   result :");
	ft_putnbr_base(2147483647,"01");
	printstr("\n");
    	return (0);
}
