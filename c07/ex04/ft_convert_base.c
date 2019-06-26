/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 05:10:23 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/24 10:50:35 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int take_nb(char c, char *base, int number)
{
    int i;
    
    i = 0;
    while (number >= base_lenght)
    {
        ++lenght;
        number /= base_lenght;
    }
    return (++lenght);
}

int		ft_atoi_base(char *str, char *base)
{
	int	q;
	int i;
	int result;
	int neg;
	int lenghtB;

	lenghtB = 0;
	while (base[lenghtB])
		++lenghtB;
	q = 0;
	while (str[q] != '\0' && (str[q] == ' ' || str[q] == '\r' || str[q] == '\t'
				|| str[q] == '\n' || str[q] == '\v' || str[q] == '\f'))
		q++;
	i =  q - 1;
	neg = 1;
	result = 0;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == q) ||
				(str[i] != '-' && str[i] != '+')))
	{
		if (str[i] == '-')
			neg = -1;
		else if (str[i] != '+')
			result = (result * lenghtB) + (take_nb(str[i], base));
	}
	return (result * neg);
}
