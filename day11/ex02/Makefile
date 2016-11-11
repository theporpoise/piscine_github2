# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 08:54:30 by mgould            #+#    #+#              #
#    Updated: 2016/11/08 19:36:24 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_list.h
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
SRC = ft_create_elem.c main.c ft_list_push_front.c ft_list_push_back.c

all:
	gcc $(FLAG) $(OPTION) $(SRC)

clean:
	rm -f ./a.out

fclean: clean
	rm -fr ./a.out

re: fclean all
