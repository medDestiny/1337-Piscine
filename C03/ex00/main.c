/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:18:43 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 14:35:43 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2);

int	main()
{
	char s1[] = "111";
	char s2[] = "222";

	printf("dyali :%d\n", ft_strcmp(s1,s2));
	printf("dyalhom tzb :%d", strcmp(s1,s2));
}
