/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:15:28 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 18:29:48 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char src[30] = "aaaa";
	char dest[30] = "gggg";
	int s = 4;
	//printf("%s", ft_strncat(dest,src,s));
	printf("%s", strncat(dest,src,s));
}
