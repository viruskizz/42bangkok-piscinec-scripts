/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:36:36 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/03 21:14:46 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	test[50] = "Hello";
	char	dest[50] = "Hello";
	char	src[] = "World is add after";

	strncat(test, src, 5);
	ft_strncat(dest, src, 5);
	printf("Expect : %s\n", test);
	printf("Result : %s\n", dest);
	strncat(test, src, 30);
	ft_strncat(dest, src, 30);
	printf("Expect : %s\n", test);
	printf("Result : %s\n", dest);
	return (0);
}
