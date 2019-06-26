/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 01:28:48 by nborrat           #+#    #+#             */
/*   Updated: 2019/06/23 01:54:29 by nborrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H
#define __FT_BOOLEAN_H

#include <unistd.h>

#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 ? FALSE : TRUE)
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."

typedef int		t_bool;
#endif
