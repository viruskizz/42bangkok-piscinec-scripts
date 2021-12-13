/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:29:35 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 23:19:10 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("Expect: 2^0 = %d\n", (int) pow(2, 0));
	printf("Result: 2^0 = %d\n", ft_iterative_power(2, 0));
	printf("Expect: 2^5 = %d\n", (int) pow(2, 5));
	printf("Result: 2^5 = %d\n", ft_iterative_power(2, 5));
	printf("Expect: -2^10 = 1024\n");
	printf("Result: -2^10 = %d\n", ft_iterative_power(-2, 10));
	printf("Expect: -5^9 = -1953125\n");
	printf("Result: -5^9 = %d\n", ft_iterative_power(-5, 9));
	printf("Expect: 10^-1 = 0 [expect error]\n");
	printf("Result: 10^-1 = %d\n", ft_iterative_power(10, -1));
	return (0);
}
