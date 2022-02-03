/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:02:48 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/03 00:12:45 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, comMent tu vas ? 42Mots quArante-deux; cinquante+et+un";
	printf("Before: %s\n", str);
	ft_strcapitalize(str);
	printf("After: %s\n", str);
	return (0);
}
