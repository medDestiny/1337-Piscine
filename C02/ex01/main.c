/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:42:16 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 17:17:31 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char	src[] = "aaaaaaaa";
	int	size = 4;
	char	dest[] = "bbbbbbb";

	printf("%s", ft_strncpy(dest, src, size));
	//printf("%s", strncpy(dest, src, size));
}
