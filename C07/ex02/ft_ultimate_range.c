/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:31:06 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/11 18:45:45 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	size;
	int	*tab;

	index = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
	{
		range = NULL;
		return (-1);
	}
	*range = tab;
	while (index < size)
	{
		tab[index] = min + index;
		index++;
	}
	return (size);
}
