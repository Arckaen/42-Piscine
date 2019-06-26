#include "../includes/tools.h"

void	ft_gestion(char *str, char **dico)
{
	int len;

	if (ft_check(str) == 1)
	{
		len = ft_strlen(str);
		if (len < 39)
			ft_recursive_aff(str, len, 1, dico);
		else
			write(1, "Error", 5);
	}
	else
		write(1, "Error", 6);
}
