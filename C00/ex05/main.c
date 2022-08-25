/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:52:33 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/25 16:52:27 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = -1;
	while (++n1 <= 7)
	{
		n2 = n1;
		while (++n2 <= 8)
		{
			n3 = n2;
			while (++n3 <= 9)
			{
				ft_putchar(n1 + 48);
				ft_putchar(n2 + 48);
				ft_putchar(n3 + 48);
				if (n1 != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
