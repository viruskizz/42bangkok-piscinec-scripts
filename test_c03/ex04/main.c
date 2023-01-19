/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:26:55 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/06 23:57:38 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{	
	char	test[] = "ABCDEFGHIJ";
	char	needle[] = "EF";
	char	*test_result;
	char	*result;

	result = strstr(test, needle);
	test_result = ft_strstr(test, needle);
	printf("Expect : %s  --  %p\n", result, result);
	printf("Result : %s  --  %p\n", test_result, test_result);
	result = strstr(test, "");
	test_result = ft_strstr(test, "");
	printf("Expect : %s  --  %p\n", result, result);
	printf("Result : %s  --  %p\n", test_result, test_result);
	return (0);
}
