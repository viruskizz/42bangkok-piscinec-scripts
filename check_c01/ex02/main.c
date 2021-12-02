#include <stdio.h>

void ft_swap(int *a, int *b);

int     main(void)
{
	int a = 100;
	int b = 200;

	ft_swap(&a, &b);
    	printf("Expect result : 200 100\n");
    	printf("User   result : %d %d\n",a,b);

    	return (0);
}
