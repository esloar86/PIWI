# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frdescam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/25 21:52:24 by frdescam          #+#    #+#              #
#    Updated: 2019/06/25 21:52:26 by frdescam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = main.c ft_atoi.c ft_putnbr.c ft_strcmp.c op.c 

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

clean:
	rm -f *.o

re: fclean all
