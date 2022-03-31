/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:40:52 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 02:26:03 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("Expect: fibo(0) = 0\n");
	printf("Result: fibo(0) = %d\n", ft_fibonacci(0));
	printf("Expect: fibo(1) = 1\n");
	printf("Result: fibo(1) = %d\n", ft_fibonacci(1));
	printf("Expect: fibo(2) = 1\n");
	printf("Result: fibo(2) = %d\n", ft_fibonacci(2));
	printf("Expect: fibo(3) = 2\n");
	printf("Result: fibo(3) = %d\n", ft_fibonacci(3));
	printf("Expect: fibo(10) = 55\n");
	printf("Result: fibo(10) = %d\n", ft_fibonacci(10));
	printf("Expect: fibo(-297) = -1 [expect error]\n");
	printf("Result: fibo(-297) = %d\n", ft_fibonacci(-297));
	return (0);
}
