/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:46:50 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/11 19:49:28 by mmisskin         ###   ########.fr       */
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

void	ft_build(int size, char **strs, char *sep, char *dest)
{
	int	index;
	int	index2;
	int	index3;

	index = 0;
	index3 = 0;
	while (index < size)
	{
		index2 = 0;
		while (strs[index][index2])
		{
			dest[index3] = strs[index][index2];
			index2++;
			index3++;
		}
		index2 = 0;
		while (sep[index2] && index < size - 1)
		{
			dest[index3] = sep[index2];
			index2++;
			index3++;
		}
		index++;
	}
	dest[index3] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		x;
	char	*dest;

	x = 0;
	len = 0;
	while (x < size)
	{
		len += ft_strlen(strs[x]);
		x++;
	}
	len += (ft_strlen(sep) * (size - 1));
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		dest = NULL;
	ft_build(size, strs, sep, dest);
	return (dest);
}
