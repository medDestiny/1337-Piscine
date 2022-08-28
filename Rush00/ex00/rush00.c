/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:48:10 by mmisskin          #+#    #+#             */
/*   Updated: 2022/08/28 15:07:56 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putlines(int length, char be_char, char mid_char)
{
	int	char_count;

	char_count = 1;
	while (char_count <= length && length > 0)
	{
		if (char_count == 1 || char_count == length)
			ft_putchar(be_char);
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
	while (line_count <= y && y > 0)
	{
		if (line_count == 1 || line_count == y)
			ft_putlines(x, 'o', '-');
		else
			ft_putlines(x, '|', ' ');
		line_count++;
	}
}
