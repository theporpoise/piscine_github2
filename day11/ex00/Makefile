# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 08:54:30 by mgould            #+#    #+#              #
#    Updated: 2016/11/08 15:03:46 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = ft_list.h
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
SRC = ft_create_elem.c main.c

all:
	gcc $(FLAG) $(OPTION) $(SRC)

clean:
	rm -f ./a.out

fclean: clean
	rm -fr ./a.out

re: fclean all
