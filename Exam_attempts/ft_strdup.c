/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:15:58 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/08 15:24:29 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int	i;

	i = 0;
	str = (char*) malloc(sizeof(src));
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include<stdio.h>

int	main()
{
	char *str = "testink hh lol 123 xd test it zorkimk ez";
	printf("%s", ft_strdup(str));
}
