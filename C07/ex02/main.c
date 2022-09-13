/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:31:21 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/13 18:53:00 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max);

#include<stdio.h>

int	main()
{
	int	*tab;
	int	min = -2147384648;
	int	max = 0;
	int	i = 0;
	int	size;

	size = ft_ultimate_range(&tab, min, max);
	printf("%d\n\n\n", size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
