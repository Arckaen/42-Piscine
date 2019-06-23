/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:45:30 by corozco           #+#    #+#             */
/*   Updated: 2019/06/23 14:25:12 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <stdio.h> //delete
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define MAX 80000

void	ft_gestion(char *str, char **dico);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *c);
char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);
int		ft_check(char *str);
void	ft_recursive_aff(char *str, int len, int c, char **dico);

#endif
