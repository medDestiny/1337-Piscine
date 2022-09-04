/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:10:27 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/02 11:39:51 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	repeat(char c)
{
	int i;
	char x;
	char y;
	x = 'a';
	y = 'A';
	i = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		if (c >= 'a' && c <= 'z')
		{
			while (x <= c)
			{
				x++;
				i++;
			}
			return (i);
		}
		if (c >= 'A' && c <= 'Z')
		{
			while (y <= c)
			{
				y++;
				i++;
			}
			return (i);
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	count;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			count = 0;
			while (count < repeat(av[1][i]))
			{
				write(1, &av[1][i], 1);
				count++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

