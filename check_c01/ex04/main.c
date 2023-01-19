#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int     main(void)
{	int div,mod;

	div = 45;
	mod = 10;
	ft_ultimate_div_mod(&div, &mod);
    	printf("Expect result : 4 5\n");
    	printf("User   result : %d %d\n",div,mod);

	return (0);
}
