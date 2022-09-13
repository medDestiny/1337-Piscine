/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:47:54 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/13 19:30:48 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(int size, char **strs, char *sep);

#include<stdio.h>

int	main()
{
	char *str[] = {};
	char *sep = "\n	[Lorem ipsum dolor sit amet, consectetur adipiscing elit.]	\n";
	int	s = 0;

	printf("%s", ft_strjoin(s, str, sep));
}
