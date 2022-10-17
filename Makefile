# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:04:49 by vlenard           #+#    #+#              #
#    Updated: 2022/10/17 11:35:39 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c ft_isdigit.c 

all: compile
compile: 
	gcc -Wall -Werror -Wextra $(SRC)
run: all
	./a.out
n:
	norminette $(SRC)
clean: 
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f a.out
re: fclean all