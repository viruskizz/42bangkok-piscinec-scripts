#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int     main(void)
{	int div,mod;

	ft_div_mod(45, 10, &div, &mod);
    	printf("Expect result : 4 5\n");
    	printf("User   result : %d %d\n",div,mod);

	return (0);
}
