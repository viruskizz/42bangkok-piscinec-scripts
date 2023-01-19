/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:35:11 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 16:51:22 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int	main(void)
{
	printf("EMPTY is should be 1: %d\n", ft_str_is_alpha(""));
	printf("abCdeZ is should be 1: %d\n", ft_str_is_alpha("abCdeZ"));
	printf("abc_ef is should be 0: %d\n", ft_str_is_alpha("abc_ef"));
	printf("abc|ef is should be 0: %d\n", ft_str_is_alpha("abc|ef"));
}
