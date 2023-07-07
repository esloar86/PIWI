# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frdescam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 14:53:12 by frdescam          #+#    #+#              #
#    Updated: 2019/06/26 21:59:22 by frdescam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all
