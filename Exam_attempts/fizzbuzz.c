/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:52:21 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/02 12:21:57 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putn(int n)
{
	char c;
	c = n + 48;
	if (n <= 9)
	{
		write(1, &c, 1);
	}
	else
	{
		ft_putn(n / 10);
		ft_putn(n % 10);
	}
}

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			write(1, "fizzbuzz", 8);
		}
		else if ((i % 3) == 0)
		{
			write(1, "fizz", 4);
		}
		else if ((i % 5) == 0)
		{
			write(1, "buzz", 4);
		}
		else
			ft_putn(i);
		write(1, "\n", 1);
		i++;
	}
}
