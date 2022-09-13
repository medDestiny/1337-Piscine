/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:50:32 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/13 09:55:56 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(src) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (src[index])
	{
		str[index] = src[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
