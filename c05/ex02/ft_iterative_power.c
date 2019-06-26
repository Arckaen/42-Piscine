/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:00:09 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/20 18:09:51 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;

	temp = nb;
	while (power > 1)
	{
		power--;
		nb = temp * nb;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}
