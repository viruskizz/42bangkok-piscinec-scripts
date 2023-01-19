#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = ft_ultimate_range(&a,5,5);
	d = ft_ultimate_range(&b,5,9);
	printf("Expect.0 4 0x0 5 6 7 8\n");
	printf("Result.%d %d %p %d %d %d %d\n",c,d,a,b[0],b[1],b[2],b[3]);
}

