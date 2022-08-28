/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:14:09 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/26 13:13:58 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int index;

	index = 0;
	if (argc > 1)
		while (argv[1][index])
		{
			write(1, &argv[1][index], 1);
			index++;
		}
	write(1, "\n", 1);
	return (0);
}
