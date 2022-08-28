/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:17:01 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/26 13:28:47 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int index;

	index = 0;
	if (argc > 1)
	{
		argc--;
		while (argv[argc][index])
		{
			write (1, &argv[argc][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
