#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size);

int     main(void)
{
	int a[] = { 100,300,400 , 600,200, 700,900,800,500,0};
	
	ft_sort_int_tab(a, 10);

    	printf("Expect result : 0, 100, 200, 300, 400, 500, 600, 700, 800, 900, \n");
    	printf("User   result : ");
	
	for (int i =0; i<= 9;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");

	return (0);
}
