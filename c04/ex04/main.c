/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:41:50 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 00:17:32 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("input: ft_putbase(123456, \"0123987654\")\n");
	printf("Expect: 123456\n");
	printf("Result: ");
	ft_putnbr_base(123456, "0123987654");
	printf("\n");
	return (0);
}
