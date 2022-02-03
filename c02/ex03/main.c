/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:35:11 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 17:03:06 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int	main(void)
{
	printf("EMPTY is should be 1: %d\n", ft_str_is_numeric(""));
	printf("123456 is should be 1: %d\n", ft_str_is_numeric("123456"));
	printf("12_9 is should be 0: %d\n", ft_str_is_numeric("12_9"));
}
