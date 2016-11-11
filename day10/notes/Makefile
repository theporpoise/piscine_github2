# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 08:54:30 by mgould            #+#    #+#              #
#    Updated: 2016/11/07 10:24:45 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesomeprog

SRC = source.c \
	  source2.c \

TEXT = "42 is for the brave"

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o
	other files

fclean: clean
	/bin/rm -r $(NAME)

re: fclean all

rule_a:
	echo $(TEXT)

rule_b: rule_a
	echo "rule B"
