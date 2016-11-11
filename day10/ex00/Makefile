# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 08:54:30 by mgould            #+#    #+#              #
#    Updated: 2016/11/07 16:46:57 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
S_PATH = ./srcs/
HEADER = ./includes
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(S_PATH)ft_putchar.c $(S_PATH)ft_putstr.c $(S_PATH)ft_strcmp.c \
	  $(S_PATH)ft_strlen.c $(S_PATH)ft_swap.c
OFILE = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OFILE)

clean:
	rm -f $(OFILE)

fclean: clean
	rm -fr $(NAME)

re: fclean all
