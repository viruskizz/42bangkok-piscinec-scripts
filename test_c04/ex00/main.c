/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:48:06 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/04 09:55:06 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("Expect: Hello = %d\n", (int) strlen("Hello"));
	printf("Result: Hello = %d\n", ft_strlen("Hello"));
	return (0);
}
