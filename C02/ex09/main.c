/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:27:58 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/31 17:06:46 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str[] = "iwa sir nta testi had l3jb";
	printf("%s", ft_strcapitalize(str));
}
