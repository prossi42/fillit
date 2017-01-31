# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prossi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/29 14:18:48 by prossi            #+#    #+#              #
#    Updated: 2017/01/19 23:22:53 by bviala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc
INC = . ./libft
CFLAGS = -Wall -Werror -Wextra -I.

SRC = ft_print_square ft_place ft_utilities ft_checkchar ft_checkfile \
	  ft_checkform ft_checkspace ft_closefile ft_list ft_openfile ft_readfile \
	  ft_tetriform ft_upleft main ft_checkconnect ft_inputalgo ft_countetri

SRC := $(addsuffix .c, $(SRC))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	(cd libft ; make; make clean)
	$(CC) $(CFLAGS) $^ -L./libft -lft -o fillit

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a

re: fclean all
