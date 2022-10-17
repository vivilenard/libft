#ifndef LIBFT_H_
#define LIBFT_H_

#include <stdio.h>
typedef unsigned long size_t;

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_tolower(int c);
int ft_toupper(int c);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(const char *s);

#endif