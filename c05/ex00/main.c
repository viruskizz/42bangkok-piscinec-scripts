/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:40:19 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 01:54:28 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("Expect: fact(0) = 1\n");
	printf("Result: fact(0) = %d\n", ft_iterative_factorial(0));
	printf("Expect: fact(1) = 1\n");
	printf("Result: fact(1) = %d\n", ft_iterative_factorial(1));
	printf("Expect: fact(2) = 2\n");
	printf("Result: fact(2) = %d\n", ft_iterative_factorial(2));
	printf("Expect: fact(5) = 120\n");
	printf("Result: fact(5) = %d\n", ft_iterative_factorial(5));
	printf("Expect: fact(10) = 3628800\n");
	printf("Result: fact(10) = %d\n", ft_iterative_factorial(10));
	printf("Expect: fact(20) = 0 [expect error]\n");
	printf("Result: fact(20) = %d\n", ft_iterative_factorial(20));
	printf("Expect: fact(-1) = 0 [expect error]\n");
	printf("Result: fact(-1) = %d\n", ft_iterative_factorial(-1));
}
