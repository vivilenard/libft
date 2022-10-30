# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:04:49 by vlenard           #+#    #+#              #
#    Updated: 2022/10/30 10:00:56 by karllenard       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_isdigit.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
		ft_memmove.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_itoa.c ft_strmapi.c

all: compile
compile: lib
	gcc main.c libft.a 
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