# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nimatura <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 19:56:08 by nimatura          #+#    #+#              #
#    Updated: 2024/06/10 21:23:56 by nimatura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./includes/

SRCS = ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = ${SRCS:.c=.o}
INC_FILE = libft.h

SRC = $(addprefix $(SRC_DIR), $(SRCS))
OBJ = $(addprefix $(OBJ_DIR), $(OBJS))
INC = $(addprefix $(INC_DIR), $(INC_FILE))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCS) Makefile
	@mkdir -p $(@D)
	@gcc -I$(INC_DIR) -c $< -o $@  

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
