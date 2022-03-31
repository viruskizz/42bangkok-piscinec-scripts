/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:08:17 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/08 00:03:43 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	str1[10] = "Hello";
	char	str2[10] = "Hello";
	char	str3[10] = "Hello";
	char	my1[10] = "Hello";
	char	my2[10] = "Hello";
	char	my3[10] = "Hello";
	unsigned long	n;
	unsigned int	m;

	n = strlcat(str1, "World", 3);
	m = ft_strlcat(my1, "World", 3);
	printf("Expect: (World, 3) = %s - %lu\n", str1, n);
	printf("Result: (World, 3) = %s - %u\n", my1, m);
	n = strlcat(str2, "World", 10);
	m = ft_strlcat(my2, "World", 10);
	printf("Expect: (World, 10) = %s -  %lu\n", str2, n);
	printf("Result: (World, 10) = %s -  %u\n", my2, m);
	n = strlcat(str3, "", 10);
	m = ft_strlcat(my3, "", 10);
	printf("Expect: %s -  %lu\n", str3, n);
	printf("Result: %s -  %u\n", my3, m);
}
