#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int     main(void)
{
	int a[] = { 0, 100, 200, 300, 400, 500, 600, 700, 800, 900};
	
	ft_rev_int_tab(a, 10);

    	printf("Expect result : 900, 800, 700, 600, 500, 400, 300, 200, 100, 0, \n");
    	printf("User   result : ");
	
	for (int i =0; i<= 9;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");

    	return (0);
}
