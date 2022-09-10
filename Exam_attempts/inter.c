/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:26:01 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/08 16:00:45 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_check(char *str, char x, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == x)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (s1[x])
	{
		if (ft_check(s1, s1[x], x) == 1)
		{
			while (s2[y])
			{
				if (s2[y] == s1[x])
				{
					write(1, &s1[x], 1);
					break;
				}
				y++;
			}
		}	
		x++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}
