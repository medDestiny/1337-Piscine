/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:08:24 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/10 16:30:52 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	index2;
	unsigned int	destlen;
	unsigned int	srclen;

	index = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	index2 = destlen;
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (index < (size - destlen - 1) && src[index])
	{
		dest[index2] = src[index];
		index++;
		index2++;
	}
	dest[index2] = '\0';
	return (destlen + srclen);
}
