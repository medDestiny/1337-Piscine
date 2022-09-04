/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:02:04 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/02 09:42:37 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check4doubl(char *str, char x,int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == x)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *str,char *str2)
{
	int	i;
	int l;

	i = 0;
	while (str[i] != '\0')
	{
		l = 0;
		while (str2[l] != '\0')
		{
			if (str[i] == str[l])
			{
				if (check4doubl(str, str[i], i) == 0)
				{
					write(1, &str[i], 1);
					break;
				}
			}
			l++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1],av[2]);
	write(1, "\n", 1);
}
