/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:55:46 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/19 21:14:11 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[d] != '\0' && d < nb)
	{
		dest[i] = src[d];
		d++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
