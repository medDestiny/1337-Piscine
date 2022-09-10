/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:10:31 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/09 12:54:46 by mmisskin         ###   ########.fr       */
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

int	ft_check2(char *str, char x)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == x)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x])
	{
		if (ft_check(s1, s1[x], x) == 1)
			write(1, &s1[x], 1);
		x++;
	}
	x = 0;
	while (s2[x])
	{
		if (ft_check2(s1, s2[x]) == 1)
		{
			if (ft_check(s2, s2[x], x) == 1)
				write(1, &s2[x], 1);
		}
		x++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}
