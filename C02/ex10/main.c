/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:42:28 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 16:04:18 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char src[] = "testinki nbh";
	char dest[] = "la h22222";
	unsigned int size = 8;

	ft_strlcpy(dest,src,size);
	printf("%d\n", ft_strlcpy(dest,src,size));
	printf("%lu\n", strlcpy(dest,src,size));
	printf("%s", dest);
}
