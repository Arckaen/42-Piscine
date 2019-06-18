/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 01:04:31 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/12 01:48:14 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int t;
	unsigned int e;

	i = 0;
	t = 0;
	e = 0;
	while (dest[i] != '\0')
		i++;
	t = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	e = i;
	i = 0;
	while (src[i] != '\0' && t + i < nb)
	{
		dest[t + i] = src[i];
		i++;
	}
	if (t + i < nb)
		dest[i] = '\0';
	return (t + e);
}
