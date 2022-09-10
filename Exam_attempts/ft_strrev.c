/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:28:48 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/08 19:35:11 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int l;
	int	swp;

	l = 0;
	i = 0;
	while (str[l])
		l++;
	while (i < (l / 2))
	{
		swp = str[i];
		str[i] = str[l - 1];
		str[l - 1] = swp;
		i++;
		l--;	
	}
	return (str);
}

#include<stdio.h>

int	main()
{
	char str[] = "abcdef";
	printf("%s", ft_strrev(str));
}
