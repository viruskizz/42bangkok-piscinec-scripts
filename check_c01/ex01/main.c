#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int     main(void)
{
	int a42;
	int *a1 = &a42;
	int **a2 = &a1;
	int ***a3 = &a2;
	int ****a4 = &a3;
	int *****a5 = &a4;
	int ******a6 = &a5;
	int *******a7 = &a6;
	int ********a8 = &a7;
	int *********a9 = &a8;

	a42 = 0;
	ft_ultimate_ft(a9);
    	printf("Expect result : 42\n");
    	printf("User   result : %d\n", a42);

    	return (0);
}
