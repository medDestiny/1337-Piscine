/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:13:27 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/04 09:07:46 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strcpy(char *dest, char *src);

int	main()
{
	char dest[] = "test";
	char src[] = "azbhh";
	
	printf("%s\n", ft_strcpy(dest,src));
	//printf("dyalhom :%s", strcpy(dest, src));
}
