/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <corozco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:26:45 by corozco           #+#    #+#             */
/*   Updated: 2019/06/23 07:44:12 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

int		is_split(char s, char *split)
{
	int	i;

	i = 0;
	while (split[i] != '\0')
	{
		if (s == split[i])
			return (1);
		i++;
	}
	if (s == '\0')
		return (1);
	return (0);
}

int		cmp_mots(char *str, char *charset)
{
	int	i;
	int	mots;

	mots = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_split(str[i + 1], charset) == 1
			&& is_split(str[i], charset) == 0)
			mots++;
		i++;
	}
	return (mots);
}

void	ft_cytab(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (is_split(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		mots;

	mots = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_split(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_split(str[i + j], charset) == 0)
				j++;
			split[mots] = (char*)malloc(sizeof(char) * (j + 1));
			ft_cytab(split[mots], str + i, charset);
			i += j;
			mots++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		mots;

	mots = cmp_mots(str, charset);
	if (!(split = (char**)malloc(sizeof(char*) * (mots + 1))))
		return (NULL);
	split[mots] = 0;
	write_split(split, str, charset);
	return (split);
}
