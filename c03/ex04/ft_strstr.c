/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:24:27 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/19 15:03:05 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int d;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		d = 0;
		while (to_find[d] == str[i + d])
		{
			d++;
			if (to_find[d] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
