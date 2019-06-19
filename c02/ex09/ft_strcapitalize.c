/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 16:13:34 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/19 02:08:26 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= '0' && str[i] <= '9'))
		{
			if (j == 0 && str[j + i] >= 'a' && str[j + i] <= 'z')
				str[j + i] = str[j + i] - 32;
			else if (j != 0 && str[j + i] >= 'A' && str[j + i] <= 'Z')
				str[j + i] = str[j + i] + 32;
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
