# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 11:41:49 by corozco           #+#    #+#              #
#    Updated: 2019/06/23 14:31:26 by bbaudry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := \
	srcs/ft_putchar.c \
	srcs/ft_putnbr.c \
	srcs/ft_putstr.c \
	srcs/ft_split.c \
	srcs/ft_gestion.c \
	srcs/ft_strlen.c \
	srcs/ft_check.c \
	srcs/ft_recursive_aff.c \
	main.c \
	
OBJS := $(SRC:.c=.o)
GFLAGS := -Wall -Wextra -Werror -I $(HEAD)
HEAD := includes
EXE := rush-02

all: $(EXE) clean

$(EXE): $(HEAD) $(OBJS)
	gcc $(GFLAGS) -c $(OBJS) -o $(EXE)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(EXE)

re: fclean all
