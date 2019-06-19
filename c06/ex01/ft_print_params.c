/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 02:18:51 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/19 02:32:35 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	write(1, &str[i], 1);
	i++;
	}
}

int main(int argc, char **argv)
{
	char i;

	i = 1;
	while (i < argc)
	{
	ft_putstr(argv[i]);
	write(1, "\n", 1);
	i++;
	}
	return (0);
}
