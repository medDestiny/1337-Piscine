/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:30:55 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/10 12:11:01 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	x = 1;
	while (x < ac)
	{
		y = x + 1;
		while (y < ac)
		{
			if (ft_strcmp(av[x], av[y]) > 0)
				ft_swap(&av[x], &av[y]);
			y++;
		}
		x++;
	}
	x = 1;
	while (x < ac)
	{
		ft_putstr(av[x]);
		write(1, "\n", 1);
		x++;
	}
}
