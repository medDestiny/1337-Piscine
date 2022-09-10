/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:13 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/10 11:02:19 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (str[x] == '\0' && to_find[y] == '\0')
		return (&str[x]);
	while (str[x])
	{
		while (str[x + y] && to_find[y] && str[x + y] == to_find[y])
			y++;
		if (to_find[y] == '\0')
			return (&str[x]);
		y = 0;
		x++;
	}
	return (0);
}
