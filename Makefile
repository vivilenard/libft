# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:04:49 by vlenard           #+#    #+#              #
#    Updated: 2022/10/20 14:27:27 by vlenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	main.c ft_isdigit.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
		ft_memmove.c ft_atoi.c

all: compile
compile: lib
	gcc libft.a 
lib:
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rcv libft.a *.o
run: all
	&& ./a.out
n:
	norminette $(SRC)
clean: 
	/bin/rm -f *.o ./a.out
fclean: clean
	/bin/rm -f libft.a *.o ./a.out
re: fclean all