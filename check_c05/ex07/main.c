/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:21:17 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 00:25:39 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("Expect: -3738 => 2\n");
	printf("Result: -3738 => %d\n", ft_find_next_prime(-3738));
	printf("Expect: 0 => 2\n");
	printf("Result: 0 => %d\n", ft_find_next_prime(0));
	printf("Expect: 1 => 2\n");
	printf("Result: 1 => %d\n", ft_find_next_prime(1));
	printf("Expect: 2 => 2\n");
	printf("Result: 2 => %d\n", ft_find_next_prime(2));
	printf("Expect: 13 => 13\n");
	printf("Result: 13 => %d\n", ft_find_next_prime(13));
	printf("Expect: 284 => 293\n");
	printf("Result: 284 => %d\n", ft_find_next_prime(284));
	printf("Expect: 2147483643 => 2147483647\n");
	printf("Result: 2147483643 => %d\n", ft_find_next_prime(2147483643));
	printf("Expect: 2147483647 => 2147483647\n");
	printf("Result: 2147483647 => %d\n", ft_find_next_prime(2147483647));
	return (0);
}
