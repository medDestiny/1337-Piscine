/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:46:37 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/07 21:53:00 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
			write(1, &av[1][i--], 1);
	}
	write(1, "\n", 1);
}
