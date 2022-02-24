# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nattia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 08:19:25 by nattia            #+#    #+#              #
#    Updated: 2022/02/23 08:19:26 by nattia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  so_long

SRCS = so_long_bonus.c utils_bonus.c testeur_map_bonus.c converter_bonus.c finder_bonus.c rander_bonus.c walltest_bonus.c keyhoks_up_left_bonus.c keyhoks_down_right_bonus.c\
parcing_map_bonus.c utils_to_bonus.c  enemiefinder_bonus.c  itoa_bonus.c enemierander_bonus.c  anim_bonus.c utilstree_bonus.c

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

all = $(NAME)

CC = gcc


$(NAME): $(SRCS) $(OBJ) so_long_bonus.h
	$(CC) $(FLAGS) $(SRCS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

%.o : %.c
	@$(CC) $(FLAGS) -c $<

clean : 
	@rm -rf $(OBJ)

fclean : 
	@rm -rf $(OBJ) $(NAME)

re : fclean all
	
