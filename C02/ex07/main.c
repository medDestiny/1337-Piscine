/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:12:52 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/31 15:18:48 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strupcase(char *str);

int	main()
{
	char str[] = "ababac";
	char	*x = ft_strupcase(str);

	printf("%s", x);
}
