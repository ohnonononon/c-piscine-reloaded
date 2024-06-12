# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nimatura <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 19:56:08 by nimatura          #+#    #+#              #
#    Updated: 2024/06/12 20:49:53 by nimatura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = ./src/
INC_DIR = ./includes/

SRCS = ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putchar.c
INC_FILE = libft.h

SRC = $(addprefix $(SRC_DIR), $(SRCS))
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
