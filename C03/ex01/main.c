/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:38:14 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 14:49:21 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char s1[] = "test";
	char s2[] = "tist";
	unsigned int n = 4;

	printf("dyali :%d\n", ft_strncmp(s1,s2,n));
	printf("dyalhom :%d", strncmp(s1,s2,n));
}
