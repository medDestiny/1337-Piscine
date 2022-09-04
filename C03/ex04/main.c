/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:19 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/04 10:13:40 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "abcdef";
	char fnd[] = "bc";
	printf("%s\n", ft_strstr(str,fnd));
	//printf("%s", strstr(str,fnd));
}
