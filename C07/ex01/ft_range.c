/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:22:54 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/13 15:39:01 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	index;
	int	size;

	index = 0;
	if (min < max)
	{
		size = max - min;
		tab = (int *)malloc(size * sizeof(int));
		if (!tab)
			return (NULL);
		while (index < size)
		{
			tab[index] = min + index;
			index++;
		}
	}
	else
		tab = NULL;
	return (tab);
}
