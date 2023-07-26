# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 09:53:25 by eslopez-          #+#    #+#              #
#    Updated: 2023/07/23 21:05:43 by eslopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
CC = gcc -Wall -Wextra -Werror
SRCS = ./src/main.c			\
	  ./src/check_errors.c	\
	  ./src/ft_atoi.c		\
	  ./src/ft_search.c
HEADERS =./include/

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) -I $(HEADERS)

fclean:
	rm -f $(NAME)

clean: fclean

re: fclean all
