/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:44:06 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/08 17:54:26 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int *tabdeux;
	int k;

	k = 0;
	size--;
	while (size > 0)
	{
		tabdeux[k] = tab[size];
		k++;
		size--;
	}
	*tab = *tabdeux;
}
