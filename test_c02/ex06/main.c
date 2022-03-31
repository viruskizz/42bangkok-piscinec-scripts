/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:35:11 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 21:54:28 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int	main(void)
{
	char	dec_str[] = {71, 72, 73, 74, 75};

	printf("DEC Print: %s\n", dec_str);
	printf("EMPTY is should be 1: %d\n", ft_str_is_printable(""));
	printf("ABCDEF is should be 1: %d\n", ft_str_is_printable("ABCDE"));
	printf("Non-printale is should be 0: %d\n", ft_str_is_printable(dec_str));
}
