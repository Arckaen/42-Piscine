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
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_swap.c \
	srcs/ft_strlen.c \
	
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
