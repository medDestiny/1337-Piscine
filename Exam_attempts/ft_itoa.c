/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:17:47 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/09 12:28:43 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	int_len(int	n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int nb)
{
	long n;
	int	i;
	char	*tab;

	n = nb;
	i = int_len(n);
	if (!(tab = (char*)malloc((i + 1) * sizeof(char))))
		return (NULL);
	tab[i--] = '\0';
	if (n == 0)
	{
		tab[0] = '0';
		return (tab);
	}
	if (n < 0)
	{
		tab[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		tab[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (tab);
}

#include<stdio.h>

int	main()
{
	printf("%s", ft_itoa(9));
}
