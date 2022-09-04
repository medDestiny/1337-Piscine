/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:42:49 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 15:59:39 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	len;

	index = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	while (index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	if (index != 0)
		dest[index] = '\0';
	return (len);
}
