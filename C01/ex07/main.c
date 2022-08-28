/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:28:47 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/28 20:06:04 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1,2,3,4,5,544,90,5,9,0};
	int size = 10;
	int	index = 0;

	ft_rev_int_tab(tab, size);
	while (index <= size - 1)
	{	
		printf("%d ", tab[index]);
		index++;
	}
}
