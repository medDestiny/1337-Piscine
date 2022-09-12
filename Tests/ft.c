/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:22:16 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/10 22:37:48 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft(int **i, int ***j, char *c)
{
	int	res;
	int	tmp;
	int count;

	count = 0;
	res = **i + ***j;
	tmp = res;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		count++;
	}
	c = (char*)malloc(count * sizeof(int));
	c++;
	*c = (res + 48);
	printf("%c", *c);
}

int	main()
{
	int	i = 7;
	int	*i1 = &i;
	int	**i2 = &i1;
	int	j = 2;
	int	*j1 = &j;
	int	**j2 = &j1;
	int	***j3 = &j2;

	char c[] = "";
	ft(i2, j3, c);
}
