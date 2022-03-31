/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:35:11 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/02 22:06:58 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "AFd adfSSaa";
	ft_strlowcase(str);
	printf("afd adfssaa : %s\n", str);
}
