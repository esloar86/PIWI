# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frdescam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 14:53:12 by frdescam          #+#    #+#              #
#    Updated: 2019/06/23 16:27:59 by frdescam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = main.c ft_parse_dict.c separator.c print_number.c ft_strcmp.c \
	  input_nb.c ft_verif_dict_lenght.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
