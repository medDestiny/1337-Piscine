/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:22:54 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/07 15:22:14 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	index;

	index = 0;
	if (min < max)
	{
		tab = (int*) malloc((max - min) * sizeof(int));
		while (min < max)
		{
			tab[index] = min;
			index++;
			min++;
		}
	}
	else
		tab = NULL;
	return (tab);
}
