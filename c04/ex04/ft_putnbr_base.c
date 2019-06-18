/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:04:03 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/13 16:15:56 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '/0')
    {
        i++;
    }
    return (i);
}

int     checker(char *base)
{
	int i;
	int b;
	
	b = 0;
	i = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i] != '\0')
    {
        if (base[i] == 43 || base[i] == 45)
            return (0);
        i++;
    }
    i = 0;
    while (base[b] != '\0')
    {
        while (base[i] != '\0')
        {
            if (base[b] == base[i] && i != b)
                return (0);
            i++;
        }
        b++;
        i = 0;
    }
	return (1);
}

int		ft_putnbr_base(int nbr, char *base)
{
    int w;
    int x;
    
    x = 0;
    w = nbr / strlen(*base);
	checker(*base);
	if (checker(*base) == 1)
	{
        while(w > strlen(*base))
        {
            x = w % strlen(*base);
            write(1, base[x], 1);
            w = w / strlen(*base);
        }
        x = w % strlen(*base);
        write(1, base[x], 1);
	}
}
