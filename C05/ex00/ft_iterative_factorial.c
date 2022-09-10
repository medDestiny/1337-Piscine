/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:23:08 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/04 15:16:04 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 1)
	{
		fact = fact * (nb - 1);
		nb--;
	}
	return (fact);
}
