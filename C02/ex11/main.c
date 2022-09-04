/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:46:06 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/03 13:21:17 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_non_printable(char *str);

int	main()
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
