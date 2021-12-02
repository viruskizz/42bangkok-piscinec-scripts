#include <stdio.h>

void    ft_ft(int *nbr);

int     main(void)
{
    	int i;

	ft_ft(&i);
    	printf("Expect result : 42\n");
    	printf("User   result : %d\n",i);

    	return (0);
}
