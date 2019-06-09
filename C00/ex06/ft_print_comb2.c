/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:51:50 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/09 13:53:51 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char j;
	char h;
	char m;
	char s;

	j = '/';
	h = '/';
	while (++j <= '9')
	{
		while (++m <= '9')
		{
			s = h;
			m = j - 1;
			while (++h <= '9')
			{
				while (++s <= '9')
				{
					ft_print(j, h, m, s);
				}
				s = '/';
			}
		}
		h = '/';
	}
}
