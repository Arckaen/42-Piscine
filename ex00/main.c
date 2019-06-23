/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:43:24 by corozco           #+#    #+#             */
/*   Updated: 2019/06/23 13:36:07 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/tools.h"

int		main(int ac, char **av)
{
	int fd;
	int ret;
	char data[MAX];
	char **tab;

	fd = open("numbers.dict", O_RDONLY);
	ret = read(fd, data, MAX);
	tab = ft_split(data, "\n");
	if (ac == 2)
	{
		ft_gestion(av[1], tab);
	}
	else
		write(1, "Error", 5);
	write(1, "\n", 1);
	return (0);
}
