/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:50:41 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/07 13:21:06 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src);

#include<stdio.h>

int	main()
{
	char *src = "abcdefghijklmnopqrh8wr8b 779wh7 bw9h bqgv 7v9w && gw stuvwxyz";

	printf("%s", ft_strdup(src));
}
