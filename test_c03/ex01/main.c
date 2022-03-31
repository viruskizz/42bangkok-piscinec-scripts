/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:18:29 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/06 08:43:25 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("Diff 0 = Same\n");
	printf("Expected: \"\" - Hello, 1 = %d\n", strncmp("", "Hello", 1));
	printf("Result  : \"\" - Hello, 1 = %d\n", ft_strncmp("", "Hello", 1));
	printf("Expected: Hello - \"\", 1 = %d\n", strncmp("Hello", "", 1));
	printf("Result  : Hello - \"\", 1 = %d\n", ft_strncmp("Hello", "", 1));
	printf("Expected: Hello - Hello, 0 = %d\n", strncmp("Hello", "Hello", 0));
	printf("Result  : Hello - Hello, 0 = %d\n", ft_strncmp("Hello", "Hello", 0));
	printf("Expected: Hello - Hello, 1 = %d\n", strncmp("Hello", "Hello", 1));
	printf("Result  : Hello - Hello, 1 = %d\n", ft_strncmp("Hello", "Hello", 1));
	printf("Expected: Hello - Hello, 10 = %d\n", strncmp("Hello", "Hello", 10));
	printf("Result  : Hello - Hello, 10 = %d\n", ft_strncmp("Hello", "Hello", 10));
	printf("Expected: Hxllo - Hello = %d\n", strncmp("Hxllo", "Hello", 3));
	printf("Result  : Hxllo - Hello = %d\n", ft_strncmp("Hxllo", "Hello", 3));
	printf("Expected: Hellx - Hello = %d\n", strncmp("Hellx", "Hello", 3));
	printf("Result  : Hellx - Hello = %d\n", ft_strncmp("Hellx", "Hello", 3));
	printf("Expected: Hellx - Hellooo = %d\n", strncmp("Hellx", "Hellooo", 3));
	printf("Result  : Hellx - Hellooo = %d\n", ft_strncmp("Hellx", "Hellooo", 3));
	printf("Expected: Hel - Hello = %d\n", strncmp("Hel", "Hello", 3));
	printf("Result  : Hel - Hello = %d\n", ft_strncmp("Hel", "Hello", 3));
	return (0);
}
