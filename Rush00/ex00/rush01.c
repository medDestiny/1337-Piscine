/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:10:25 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/28 11:23:59 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putlines(int length, char beg_char, char mid_char, char end_char)
{
	int	char_count;

	char_count = 1;
	while (char_count <= length)
	{
		if (char_count == 1)
			ft_putchar(beg_char);
		else if (char_count == length)
			ft_putchar(end_char);
		else
			ft_putchar(mid_char);
		char_count++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_count;

	line_count = 1;
	while (line_count <= y && line_count > 0)
	{
		if (line_count == 1)
			ft_putlines(x, '/', '*', '\\');
		else if (line_count == y)
			ft_putlines(x, '\\', '*', '/');
		else
			ft_putlines(x, '*', ' ', '*');
		line_count++;
	}

}
