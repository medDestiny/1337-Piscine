/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:50:41 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/13 09:54:11 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src);

#include<stdio.h>

int	main()
{
	char *src = "abcdefghijklmn me testink had string hh if it works it works ez";

	printf("%s", ft_strdup(src));
}
