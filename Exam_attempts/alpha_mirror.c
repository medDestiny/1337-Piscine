/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:33:02 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/02 12:50:19 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	rev(char c)
{
	char x;
	char y;
	char x1;
	char y1;
	x1 = 'A';
	y1 = 'Z';
	x = 'a';
	y = 'z';
	if (c >= 'a' && c <= 'z')
	{
		while (x != c)
		{
			x++;
			y--;
		}
		write(1, &y, 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		while (x1 != c)
		{
			x1++;
			y1--;
		}
		write(1, &y1, 1);
	}
}

int	main(int ac, char **av)
{
	int	i;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			rev(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
