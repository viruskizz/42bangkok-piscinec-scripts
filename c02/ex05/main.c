/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:35:11 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 17:21:54 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("EMPTY is should be 1: %d\n", ft_str_is_uppercase(""));
	printf("ABCDEF is should be 1: %d\n", ft_str_is_uppercase("ABCDEF"));
	printf("AFda is should be 0: %d\n", ft_str_is_uppercase("AFda"));
}
