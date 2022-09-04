/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:13 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/04 10:27:07 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	index2;
	char	ptr[2020];

	index = 0;
	index2 = 0;
	while (str[index])
	{
		while (str[index] == to_find[index2])
		{
			ptr[index] = str[index];
			index2++;
			index++;
		}
		if (to_find[index2] != '\0')
			return (0);
		else
			ptr[index] = str[index];
		index++;
	}
	return (ptr);
}
