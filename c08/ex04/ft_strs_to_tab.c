/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:34:40 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/25 15:02:31 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include ft_stock_str.h

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(*src));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

t_stock_str		*ft_param_to_tab(int argc, char **argv)
{
	int		i;
	t_stock_str		*strs;

	if(!(params = (t_stock_str*)malloc(sizeof(t_stock_str) * (argc + 1))))
		return (0);
	i = 0;
	while (i < argc)
	{
		strs[i].size = ft_strlen(argv[i]);
		strs[i].str = argv[i];
		strs[i].copy = ft_strdup(argv[i]);
		++i;
	}
	strs[i].str = 0;
	return (strs);
}
