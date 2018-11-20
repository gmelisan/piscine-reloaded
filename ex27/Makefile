#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 11:58:15 by gmelisan          #+#    #+#              #
#    Updated: 2018/11/20 12:09:50 by gmelisan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
SRC = ./srcs/main.c ./srcs/output.c
OBJ = ./main.o ./output.o
INC = ./includes
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c -I$(INC) $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all