/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:01:48 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/13 21:16:05 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src[] = "Hello World";
	
	char	*target;
	
	target = strdup(src);
	printf("Expect: %s\n", src);
	printf("Result: %s\n", target);
	return (0);
}
