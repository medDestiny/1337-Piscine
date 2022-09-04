/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:08:13 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/30 17:14:27 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;
	int	temporary;

	index = 0;
	if (size > 0)
	{
		while (index < size)
		{
			index2 = index + 1;
			while (index2 < size)
			{
				if (tab[index] > tab[index2])
				{
					temporary = tab[index2];
					tab[index2] = tab[index];
					tab[index] = temporary;
				}
				index2++;
			}
			index++;
		}
	}
}
