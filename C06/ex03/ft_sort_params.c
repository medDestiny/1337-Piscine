/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:30:55 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 16:47:13 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	x;
	int	y;
	int	temp;

	x = 1;
	i = 0;
	while (x <= ac)
	{
		y = x + 1;
		while (y <= ac)
		{
			while (av[x] && av[y])
			{
				if (av[x][i] > av[y][i])
				{
					temp = x;
					x = y;
					y = temp;
				}
				i++;
			}
			y++;
		}
		x++;
	}
	printf("%s", av[x]);
	printf("%s", av[y]);
}
