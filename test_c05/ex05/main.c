/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:54:55 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 23:52:55 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Expect: sqrt(0) = 0\n");
	printf("Result: sqrt(0) = %d\n", ft_sqrt(0));
	printf("Expect: sqrt(1) = 1\n");
	printf("Result: sqrt(1) = %d\n", ft_sqrt(1));
	printf("Expect: sqrt(2) = 0\n");
	printf("Result: sqrt(2) = %d\n", ft_sqrt(2));
	printf("Expect: sqrt(100) = 10\n");
	printf("Result: sqrt(100) = %d\n", ft_sqrt(100));
	printf("Expect: sqrt(2147395600) = 46340\n");
	printf("Result: sqrt(2147395600) = %d\n", ft_sqrt(2147395600));
	printf("Expect: sqrt(-1) = 0 [expect error]\n");
	printf("Result: sqrt(-1) = %d\n", ft_sqrt(-1));
	printf("Expect: sqrt(13) = 0 [expect not found]\n");
	printf("Result: sqrt(13) = %d\n", ft_sqrt(13));
	printf("Expect: sqrt(934247393) = 0 [expect not found]\n");
	printf("Result: sqrt(934247393) = %d\n", ft_sqrt(934247393));
}
