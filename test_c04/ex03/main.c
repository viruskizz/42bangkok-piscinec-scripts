/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 02:02:41 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/07 02:27:04 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

int main(void)
{
	char	str[300];

	strcpy(str, "   ---+--+1234ab567");
	printf("Input : %s\n", str);
	printf("Expect: -1234\n");
	printf("Result: %d\n", ft_atoi(str));
	
	strcpy(str, "   --- +--+12a34ab567");
	printf("Input : %s\n", str);
	printf("Expect: 0\n");
	printf("Result: %d\n", ft_atoi(str));
	
	strcpy(str, "   1234ab567");
	printf("Input : %s\n", str);
	printf("Expect: 1234\n");
	printf("Result: %d\n", ft_atoi(str));
	
	strcpy(str, "   ---+--+123-4ab567");
	printf("Input : %s\n", str);
	printf("Expect: -123\n");
	printf("Result: %d\n", ft_atoi(str));
}
