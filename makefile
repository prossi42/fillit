# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prossi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/29 14:18:48 by prossi            #+#    #+#              #
#    Updated: 2017/01/03 10:00:32 by prossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./includes
SRC_PREFIX = ./srcs/

SRC = main ft_openfile ft_closefile ft_readfile ft_checkfile

SRC := $(addsuffix .c, $(SRC))
SRC := $(addprefix $(SRC_PREFIX), $(SRC))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -L. -lft -o fillit

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I includes

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
