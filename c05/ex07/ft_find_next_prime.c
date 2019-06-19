/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:45:12 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/18 03:00:26 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while(i =< nb/2)
	{
        while( <= nb/i)
        {
            if(i%2 != 1 && nb%i == 0)
			return (0);
        }
		 i++;
	}
	return (1);
}

int     ft_find_next_prime(int nb)
{
	if (nb == 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return(nb);
	else
		ft_find_next_prime(nb + 1);
}
