/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:02:37 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/31 08:06:07 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_lowercase(char *str);

int	main()
{
	char *str = "gwwgwGwgw";

	printf("%d", ft_str_is_lowercase(str));
}
