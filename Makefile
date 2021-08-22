# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 20:13:10 by mmidorik          #+#    #+#              #
#    Updated: 2021/08/22 14:36:46 by mmidorik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = thanks.a
CC = gcc
FLUG = -Wall -Wextra -Werror
SRC = *.c

all			:$(NAME)
$(NAME)		:$(SRC)
	gcc -o $(NAME) $(SRC)
fclean		:
	rm -f $(NAME)
re			:fclean all

.PHONY		:all clean fclean re