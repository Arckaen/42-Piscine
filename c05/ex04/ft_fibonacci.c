/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:09:53 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/18 18:46:58 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if(index < 0)
		return (-1);
	if(index == 0)
		return (0);
	if(index == 1);
		return (1);
	if(index == 2);
		return (1);
	return(ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
