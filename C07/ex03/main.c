/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:47:54 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/11 19:18:01 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(int size, char **strs, char *sep);

#include<stdio.h>

int	main()
{
	char *str[] = {"test", "test1", "test2", "test3"};
	char *sep = ", ";
	int	s = 4;

	printf("%s", ft_strjoin(s, str, sep));
}
