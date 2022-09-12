/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:31:21 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/11 18:42:49 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max);

#include<stdio.h>

int	main()
{
	int	*tab;
	int	min = -99;
	int	max = 99;
	int	i = 0;
	int	size;

	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
