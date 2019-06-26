/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 21:55:45 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/24 12:53:58 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tabl;

	if (min >= max)
	{
		tabl = NULL;
		return (tabl);
	}
	if (!(tabl = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (max > min)
	{
		tabl[max - min - 1] = max - 1;
		max--;
	}
	return (tabl);
}
