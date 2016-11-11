# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 08:54:30 by mgould            #+#    #+#              #
#    Updated: 2016/11/08 09:44:14 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CNAME = main.c
S_PATH = ./srcs/
HEADER = ./includes
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
SRC = $(S_PATH)ft_putchar.c $(S_PATH)ft_putstr.c $(S_PATH)ft_strcmp.c \
	  $(S_PATH)ft_strlen.c $(S_PATH)ft_swap.c $(S_PATH)ft_atoi.c \
	  $(S_PATH)ft_putnbr.c $(S_PATH)operators.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC) $(CNAME) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
