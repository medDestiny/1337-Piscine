/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:30:35 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 17:52:01 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	last;

	index = 0;
	last = 0;
	while (dest[last] != '\0')
		last++;
	while (src[index] != '\0')
	{
		dest[last] = src[index];
		index++;
		last++;
	}
	dest[last] = '\0';
	return (dest);
}
