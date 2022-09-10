/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:14:43 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/08 17:43:38 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char res;
	int i;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res *= 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

#include<stdio.h>
#include<unistd.h>

int	main()
{
	printf("%d", reverse_bits(48));
}
