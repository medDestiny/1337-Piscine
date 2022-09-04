/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:30:41 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 17:53:18 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char src[30] = "xbc";
	char dest[30] = "aaaa";

	//printf("%s", strcat(dest,src));
	printf("%s", ft_strcat(dest,src));
}
