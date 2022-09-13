/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:22:59 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/13 15:43:50 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max);

#include<stdio.h>
#include<limits.h>

int	main()
{
	int	m = INT_MIN;
	int	M = -20000;
	int *t;
	int	i = 0;

	t = ft_range(m, M);
	while (i < (M - m))
	{
		printf("%d ", t[i]);
		i++;
	}
}
