/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:29:42 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/28 20:01:33 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int    index;
	int    iswap;
	int    x;
	index = size - 1;
	iswap = 0;
   	while (iswap <= size / 2)
   	{
		if (index >= 0)
		{
			x = tab[index];
			tab[index] = tab[iswap];
			tab[iswap] = x;
		}
		index--;
		iswap++;
	}
}
