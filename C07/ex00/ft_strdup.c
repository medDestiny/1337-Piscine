/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:50:32 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/07 13:18:33 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int	index;

	index = 0;
	str = (char*) malloc(sizeof(src) - 1);
	while (src[index])
	{
		str[index] = src[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
