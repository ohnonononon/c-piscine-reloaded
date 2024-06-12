# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohnudes <nimatura@student.42barcel>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 09:41:14 by ohnudes           #+#    #+#              #
#    Updated: 2024/06/12 21:25:00 by nimatura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = display_file.c
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $@ $(SRC)

clean:
	rm -rf ft_display_file

fclean: clean

re: fclean all

.PHONY: all clean fclean re
