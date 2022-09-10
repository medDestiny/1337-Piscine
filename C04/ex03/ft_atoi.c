/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 09:03:39 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/07 18:48:49 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_skip(char *str, int index)
{
	while (str[index] == '+' || str[index] == '-')
		index++;
	return (index);
}

int	ft_sign(char *str, int pos)
{
	int	sign;

	sign = 0;
	while ((str[pos] == '-' || str[pos] == '+'))
	{
		if (str[pos] == '-')
			sign++;
		pos++;
	}
	if (sign % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	count;

	index = 0;
	result = 0;
	count = 1;
	if (str[index] == '\0')
		return (0);
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		count = ft_sign(str, index);
		index = ft_skip(str, index);
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += (str[index] - 48);
		index++;
	}
	return (count * result);
}
