/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:05:42 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/12 16:02:25 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include<stdio.h>

int	main()
{
	int	i = 0;
	int	j = 5;
	
	//ft_putchar('Y');
	//ft_putchar('\n');
	//ft_putstr("test\n");
	//ft_strcmp("A", "B");
	//ft_putchar('\n');
	//ft_strlen("123456");
	ft_swap(&i, &j);
	printf("i = %d && j = %d", i, j);
}
