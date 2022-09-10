/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisskin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:38:02 by mmisskin          #+#    #+#             */
/*   Updated: 2022/09/10 15:10:18 by mmisskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] && s2[index] && index < n - 1)
	{
		if (s1[index] == s2[index])
			index++;
		else
			break ;
	}
	return (s1[index] - s2[index]);
}
