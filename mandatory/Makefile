# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nattia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 13:43:08 by nattia            #+#    #+#              #
#    Updated: 2022/02/23 13:43:09 by nattia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  so_long

SRCS = so_long.c utils_to.c ft_putstr.c\

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

all = $(NAME)

CC = gcc


$(NAME): $(SRCS) $(OBJ) so_long.h
	$(CC) $(FLAGS) $(SRCS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

%.o: %.c
	$(CC)  $(FLAGS) -c $<

clean : 
	@rm -rf $(OBJ)

fclean : 
	@rm -rf $(OBJ) $(NAME)

re : fclean all