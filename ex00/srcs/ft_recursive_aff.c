#include "../includes/tools.h"

void ft_write(char *str)
{
	int i;

	i = 0;
	while (str[i] != ':')
	{
		i++;
	}
	i++;
	i++;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_aff(char *str, int len, int c, char **dico)
{
	int x;
	int ln;

	x = c % 3;
	if (len == 1 && str[len - c] == '0')
		ft_write(dico[0]);
	else if(str[len - c] != '0')
	{
		if (x == 2)
		{
			if (str[len - c] == '1')
			{
				ft_write(dico[(str[len - (c - 1)] - 38)]);
				write(1, " ", 1);
			}
			else
			{
				ft_write(dico[str[len - c] - 30]);
				write(1, " ", 1);
			}
		}
		else if (x == 1)
		{
			if (str[len - (c + 1)] != '1')
			{
				ft_write(dico[(str[len - c] - 48)]);
				write(1, " ", 1);
			}
		}
		else
		{
			ft_write(dico[(str[len - c] - 48)]);
			write(1, " ", 1);
		}
		if (x == 0)
		{
			ft_write(dico[28]);
			write(1, " and ", 5);
		}
		if (c > 2)
			if (x == 1)
			{
				ft_write(dico[28 + (c / 3)]);
				write(1, " ", 1);
			}
	}
}

void ft_recursive_aff(char *str, int len, int c, char **dico)
{
    if (c < len)
	{
		ft_recursive_aff(str, len, (c + 1), dico);
	}
	ft_aff(str, len, c, dico);
}
