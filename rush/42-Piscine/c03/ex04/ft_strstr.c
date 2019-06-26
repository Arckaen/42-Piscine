/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:24:27 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/11 19:47:57 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int k;
	int i;
	int len;

	k = 0;
	i = 0;
	while (to_find[i] != '\0')
		i++;
	len = i;
	i = 0;
	while (to_find[k] != str[i])
	{
		i++;
		if (str[i] == '\0')
			return (null);
	}
	while (to_find[k] == str[i])
	{
		i++;
		k++;
		if (k >= len)
			return (to_find[0]);
	}
}
