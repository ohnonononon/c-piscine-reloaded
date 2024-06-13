# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nimatura <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 19:56:08 by nimatura          #+#    #+#              #
#    Updated: 2024/06/13 15:08:50 by nimatura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra

SRC_DIR = ./srcs/
INC_DIR = ./includes/

SRC_FILES = ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putchar.c
INC_FILE = libft.h

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
INC = $(addprefix $(INC_DIR), $(INC_FILE))

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(INC) $(SRC)
	ar rc $(NAME) *.o

clean:
	$rm -f %.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
