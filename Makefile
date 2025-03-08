# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 12:51:32 by yasserlotfi       #+#    #+#              #
#    Updated: 2025/03/01 09:31:24 by yazlaigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = free_tools.c ft_split.c main.c ps_tools.c ps_tools2.c push.c reverse_rotate.c\
	sort_checker.c swap.c sort_three_two.c rotate.c sort_five_four.c sorting_tools.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean