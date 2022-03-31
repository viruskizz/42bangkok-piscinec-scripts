/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 01:04:36 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/03 02:16:45 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	printf("Coucou\\0atu vas bien ?\n");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
