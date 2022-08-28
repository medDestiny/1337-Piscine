/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:58:00 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/26 12:10:41 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i  = 0;
	argc = 0;
	if (argc > 0)
	{
		while(argv[argc][i] != '\0' && argc)
		{
			if (argv[argc][i] == 'a')
			{
				write(1, &argv[argc][i], 1);
				write(1, "\n", 1);
				i++;
			}
			i = 0;
			argc++;
		}
	}
	write(1, "a\n", 2);
	return (0);
}
