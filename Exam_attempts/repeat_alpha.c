/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:54:24 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/07 18:09:58 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	count(char c)
{
	int	count;
	char x;
	char y;
	
	x = 'a';
	y = 'A';
	count = 1;
	if (c >= 'a' && c <= 'z')
	{
		while (x < c)
		{
			count++;
			x++;
		}
	}
	else if (c >= 'A' && c<= 'Z')
	{
		while (y < c)
		{
			count++;
			y++;
		}
	}
	return (count);
}

int	main(int ac, char **av)
{
	int	i;
	int	x;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			x = 0;
			while (x < count(av[1][i]))
			{
				write(1, &av[1][i], 1);
				x++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
