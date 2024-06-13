# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nimatura <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 15:32:44 by nimatura          #+#    #+#              #
#    Updated: 2024/06/13 15:41:21 by nimatura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ_FILES = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
HDR_FILES = ft.h

SRC_DIR = srcs
HDR_DIR = includes

vpath %.c $(SRC_DIR)
vpath %.o $(SRC_DIR)
vpath %.h $(HDR_DIR)

OUT = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(HDR_DIR)

all: $(OUT)

$(OUT): $(OBJ_FILES) $(HDR_FILES)
	ar rc $@ $?

$(addprefix $(SRC_DIR)/, $(OBJ_FILES)): %.o:%.c 
	$(CC) $(CFLAGS) -c $< -o $@ 

clean reclean:
	rm -f $(addprefix $(SRC_DIR)/, $(OBJ_FILES))

fclean: clean
	rm -f $(OUT)

re: fclean all reclean

.PHONY: all fclean all reclean re
