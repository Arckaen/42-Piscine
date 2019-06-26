/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 22:08:36 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/24 18:03:38 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*tabl;
	int i;

	if (min >= max)
		return (0);
	tabl = (int*)malloc((max - min) * sizeof(int));
	if (tabl == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		tabl[i] = min;
		min++;
		i++;
	}
	*range = tabl;
	return (i);
}
