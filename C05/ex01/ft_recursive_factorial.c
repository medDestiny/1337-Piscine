/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:46:31 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/04 15:05:23 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
