# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohnudes <nimatura@student.42barcel>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 09:41:14 by ohnudes           #+#    #+#              #
#    Updated: 2024/06/13 09:41:55 by ohnudes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
