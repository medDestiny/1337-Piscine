/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:19:20 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 13:21:39 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_dec2hex(int dec)
{
	char	*base16;

	base16 = "0123456789abcdef";
	write(1, &base16[dec], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] > 0 && str[index] <= 31)
		{
			write(1, "\\", 1);
			if (str[index] < 16)
				write(1, "0", 1);
			else
				write(1, "1", 1);
			ft_dec2hex(str[index]);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
}
