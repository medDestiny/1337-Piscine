/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:49:41 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/02 08:59:21 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	l;
	char	temp;

	l = 0;
	while (str[l] != '\0')
		l++;
	l -= 1;
	i = 0;
	while (l > i)
	{
		temp = str[i];
		str[i] = str[l];
		str[l] = temp;
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
