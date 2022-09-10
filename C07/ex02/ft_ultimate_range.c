/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:31:06 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/07 16:48:57 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	index = 0;
	if (min < max)
	{
		range = (int*) malloc((max - min) * sizeof(int));
		while (min < max)
		{
			range[index] = &min;
			min++;
			index++;
		}
		return (sizeof(range));
	}
	else
	{
		range = NULL;
		return (0);
	}
	return (-1);
}
