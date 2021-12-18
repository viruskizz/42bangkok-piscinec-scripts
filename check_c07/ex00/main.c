#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char *s;

	printf("Expect.\n");
	printf("Test text.bad.\n");
	printf("Test text.\n");
	printf("Result.\n");
	s = ft_strdup("Test text.bad.");
	printf("%s\n",s);
	s[10] = 0;
	printf("%s\n",s);
}

