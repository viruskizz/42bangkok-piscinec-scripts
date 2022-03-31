/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:35:11 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 21:49:39 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "AFd adfssaa";

	ft_strupcase(str);
	printf("AFD ADFSSAA : %s\n", str);
}
