/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:40:27 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 21:53:02 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str[] = "42Bangkok";
	char	dest1[] = "Hello";
	char	dest2[20];

	printf("SRC: %s\n", str);
	ft_strcpy(dest1, str);
	printf(">> Expect1: %s\n", dest1);
	printf("RESULT1: %s\n", dest1);
	ft_strcpy(dest2, str);
	printf(">> Expect1: %s\n", dest1);
	printf("RESULT2: %s\n", dest2);
}
