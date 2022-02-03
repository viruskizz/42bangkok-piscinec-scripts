/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:30:42 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 15:48:35 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*str;
	char	dest[20];

	str = "Hello, World!";
	ft_strncpy(dest, str, 5);
	printf("strncpy n=5\n");
	printf("EXPECTED: Hello\n");
	printf("RESULT: %s\n", dest);
	return (0);
}
