#include <unistd.h>

void ft_print_combn(int n);


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
    printstr("Expect result : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n");
    printstr("User   result : ");

	ft_print_combn(1);
	printstr("\n");


    printstr("Expect result : 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89\n");
    printstr("User   result : ");

	ft_print_combn(2);
	printstr("\n");

    	printstr("Expect result : 012345678, 012345679, 012345689, 012345789, 012346789, 012356789, 012456789, 013456789, 023456789, 123456789\n");
    	printstr("User   result : ");

	ft_print_combn(9);
    	printstr("\n");
	
	return (0);
}
