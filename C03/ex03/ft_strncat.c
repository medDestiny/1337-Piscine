/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:15:19 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 18:28:56 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	last;
	int	len;

	index = 0;
	last = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	while (dest[last] != '\0')
		last++;
	while (src[index] != '\0' && index < nb)
	{
		dest[last] = src[index];
		index++;
		last++;
	}
	if (len >= nb)
		dest[last++] = '\0';
	return (dest);
}
