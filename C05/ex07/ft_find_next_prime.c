/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:14:51 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/10 19:17:10 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (x < nb)
	{
		if ((nb % x) == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb > 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
