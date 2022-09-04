/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:29:42 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/30 17:20:24 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	l_index;
	int	temporary;

	l_index = size - 1;
	index = 0;
	if (size > 0)
	{
		while (index < (size / 2))
		{
			if (l_index >= index)
			{
				temporary = tab[l_index];
				tab[l_index] = tab[index];
				tab[index] = temporary;
			}
			l_index--;
			index++;
		}
	}
}
