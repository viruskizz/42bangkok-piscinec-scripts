/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:18:29 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/06 08:28:58 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("Diff 0 = Same\n");
	printf("Expected: Hello - \"\" = %d\n", strcmp("Hello", ""));
	printf("Result  : Hello - \"\" = %d\n", ft_strcmp("Hello", ""));
	printf("Expected: \"\" - Hello = %d\n", strcmp("", "Hello"));
	printf("Result  : \"\" - Hello = %d\n", ft_strcmp("", "Hello"));
	printf("Expected: Hello - Hello = %d\n", strcmp("Hello", "Hello"));
	printf("Result  : Hello - Hello = %d\n", ft_strcmp("Hello", "Hello"));
	printf("Expected: hello - Hello = %d\n", strcmp("hello", "Hello"));
	printf("Result  : hello - Hello = %d\n", ft_strcmp("hello", "Hello"));
	printf("Expected: Hellx - Hello = %d\n", strcmp("Hellx", "Hello"));
	printf("Result  : Hellx - Hello = %d\n", ft_strcmp("Hellx", "Hello"));
	printf("Expected: Helloxx - Hello = %d\n", strcmp("Helloxx", "Hello"));
	printf("Result  : Helloxx - Hello = %d\n", ft_strcmp("Helloxx", "Hello"));
	printf("Expected: Hel - Hello = %d\n", strcmp("Hel", "Hello"));
	printf("Result  : Hel - Hello = %d\n", ft_strcmp("Hel", "Hello"));

	return (0);
}
