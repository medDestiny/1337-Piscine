/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:01:57 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/13 17:52:40 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (0);
}

char	**ft_split(char *str)
{
	char	**dest;
	char	*tab;
	int	count;
	int	i;
	int	x;
	int	in;

	x = 0;
	i = 0;
	in = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			tab = malloc((count + 1) * sizeof(char));
			dest[x] = tab;
			x++;
			count = 0;
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
		}
		count++;
		i++;
	}
	i = 0;
	x = 0;
	while (str[i])
	{
		in = 0;
		while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
		{
			dest[x][in] = str[i];
		   i++;
		}
		dest[x][in] = '\0';
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
 		x++;		
	}
	return (dest);
}

int	main()
{
	char *str = "ab 12 test 99 00";
	char **t;
	t = ft_split(str);
	int	i = 0;
	while (**t)
	{
		printf("%s", t[i]);
		i++;
	}
}
