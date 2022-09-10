/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:10:04 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/08 18:28:04 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	mirror(char c)
{
	char n = 'a';
	char m = 'A';
	char x = 'z';
	char y = 'Z';
	if (c >= 'a' && c <= 'z')
	{
		while (n < c)
		{
			n++;
			x--;
		}
		return (x);
	}
	if (c >= 'A' && c <= 'Z')
	{
		while (m < c)
		{
			m++;
			y--;
		}
		return (y);
	}
	return (c);
}

int	main(int ac, char **av)
{
	int	i;
	char c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = mirror(av[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
