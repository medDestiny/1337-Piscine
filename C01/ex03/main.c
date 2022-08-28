/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:15:07 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/28 13:09:14 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int x = 5;
	int y = 0;
	int div;
	int mod;
	ft_div_mod(x,y,&div,&mod);
	printf("div = %d mod = %d", div,mod);	
}
