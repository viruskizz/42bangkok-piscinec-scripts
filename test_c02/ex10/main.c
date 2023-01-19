/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:30:42 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/03 01:02:31 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlcpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	str[] = "Hello there, Venus";
	char	dest[19];
	int		r;

	r = ft_strlcpy(dest, str, 19);
	printf("n=10, r18 = %d, %s", r, dest);
	r = ft_strlcpy(dest, str, 10);
	printf("n=10, r18 = %d, %s", r, dest);
	r = ft_strlcpy(dest, str, 1);
	printf("n=1, r18 = %d, %s", r, dest);
	return (0);
}
