/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:15:19 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/10 16:09:24 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	last;

	index = 0;
	last = 0;
	while (dest[last] != '\0')
		last++;
	while (src[index] != '\0' && index < nb)
	{
		dest[last + index] = src[index];
		index++;
	}
	dest[last + index] = '\0';
	return (dest);
}
