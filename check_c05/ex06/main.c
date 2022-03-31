/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:23:19 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 02:01:15 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);
void	print_prime(void);

int	main(void)
{
	print_prime();
	printf("Expect: 13 => 1\n");
	printf("Result: 13 => %d\n", ft_is_prime(5));
	printf("Expect: 97 => 1\n");
	printf("Result: 97 => %d\n", ft_is_prime(97));
	printf("Expect: 1 => 0\n");
	printf("Result: 1 => %d\n", ft_is_prime(1));
	printf("Expect: 4 => 0\n");
	printf("Result: 4 => %d\n", ft_is_prime(4));
	printf("Expect: 100 => 0\n");
	printf("Result: 100 => %d\n", ft_is_prime(100));
	printf("Expect: 50021 => 1\n");
	printf("Result: 50021 => %d\n", ft_is_prime(50021));
	printf("Expect: 50022 => 0\n");
	printf("Result: 50022 => %d\n", ft_is_prime(50022));
	printf("Expect: 50023 => 1\n");
	printf("Result: 50023 => %d\n", ft_is_prime(50023));
	printf("Expect: -1 => 0\n");
	printf("Result: -1 => %d\n", ft_is_prime(-1));
	return (0);
}

void	print_prime(void)
{
	int	i;
	int is_prime;

	i = 0;
	while (i < 100)
	{
		is_prime = ft_is_prime(i);
		if (is_prime)
			printf("%d\n", i);
		i++;
	}	
}
