/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 05:14:48 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/24 10:56:07 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//int		ft_n_base_lenght(char *base, int num)
//{
//	int l;
//	int bl;
//
//	bl = 0;
//
//	while (num >= bl)
//	{
//		++l;
//		num /= bl;
//	}
//	return (++lenght);
//}

int		take_nb(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
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
		else if (str[i] == '+')
			result = (result * lenghtB) + (take_nb(str[i], base));
	}
	return (result * neg);
}

//char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
//{
//	return(ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
//}

int		main(void)
{
	printf("%d", ft_atoi_base("+++--78451", "01"));
}
