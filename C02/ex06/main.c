/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:46:39 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 10:12:31 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_printable(char *str);

int	main()
{
	printf("%d", ft_str_is_printable("9wgw94515^34\r^&#&!!)_+\\8%%"));
}