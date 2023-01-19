/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:36:36 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/06 08:48:54 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src);

int	main(void)
{
	char	test[50] = "Hello";
	char	dest[50] = "Hello";
	char	src[] = "World";

	strcat(test, src);
	ft_strcat(dest, src);
	printf("Expect : %s\n", test);
	printf("Result : %s\n", dest);
	return (0);
}
