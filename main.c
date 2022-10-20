/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:34:33 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/20 17:45:58 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	int tft_isalnum()
	{
		printf("FT_ISALNUM\n");
		char c;
		c = '9';
		
		printf("%d\n", ft_isalnum(c));
		return(0);
	}
	
	int tft_isalpha()
	{
		printf("FT_ALPHA\n");
		char c;
		c = '9';
		
		printf("%d\n", ft_isalpha(c));
		return(0);
	}

	int tft_isascii()
	{
		printf("FT_ASCII\n");
		char c;
		c = '9';
		
		printf("%d\n", ft_isascii(c));
		return(0);
	}
	
	int tft_isdigit()
	{
		printf("FT_ISDIGIT\n");
		char c;
		c = '9';
		
		printf("%d\n", ft_isdigit(c));
		return(0);
	}
	
	int tft_isprint()
	{
		printf("FT_ISPRINT\n");
		char c;
		c = '~';
		
		printf("%d\n", ft_isprint(c));
		return(0);
	}
	
	int tft_toupper()
	{
		printf("FT_TOUPPER\n");
		char c;
		
    	c = '@';
    	printf("%c\n", ft_toupper(c));
		return(0);
	}

	int tft_tolower()
	{
		printf("FT_TOLOWER\n");
		char c;
		
    	c = '@';
    	printf("%c\n", ft_tolower(c));
		return(0);
	}
	
	int tft_bzero()	
	{
		printf("FT_BZERO\n");
		char s[] = "lalilu";
		size_t n;

		n = 4;
		printf("%s\n", s);
		ft_bzero(s, n);
		printf("%s\n", s);
		return(0);
	}
	int	tft_strlen(void)
	{	
		printf("FT_STRLEN\n");
		char str[] = "hallo";
		printf("%zu\n", ft_strlen(str));
		return (0);
	}

	int tft_strlcat()
	{
		printf("FT_STRLCAT\n");
		size_t dstsize = 5;
		size_t dstsize2;
		char dst[] = "Hi";
		char src[] = "du";
		
		printf("%s\n", dst);
		printf("%zu\n", ft_strlen(dst));
		printf("%s\n", src);
		printf("%zu\n", ft_strlen(src));

		ft_strlcat(dst, src, dstsize);
		printf("result is:\n");
		printf("%s\n", dst);
		dstsize2 = ft_strlcat(dst, src, dstsize);
		printf("size %zu\n", dstsize2);
		return(0);
	}

	int tft_strlcpy()
	{
		printf("FT_STRLCPY\n");
		
		const char src[] = "hallo";
		char dst[6];
		size_t dstsize = 3;
		ft_strlcpy(dst, src, dstsize);
		printf("%s\n", dst);
		printf("%zu\n", ft_strlcpy(dst, src, dstsize));
		return(0);
	}
	
	int tft_strncmp()
	{
		printf("FT_STNCMP\n");
		char s1[] = "Apff";
		char s2[] = "Apfel";
		
		printf("%d\n", ft_strncmp(s1, s2, 6));

		return(0);
	}
	int tft_strnstr()
	{
		printf("FT_STRNSTR\n");
		
		const char haystack[] = "Hallo was geht";
		const char needle[] = "was";
		const char *ptr;
		size_t len;

		len = 6;
		ptr = ft_strnstr(haystack, needle, len); 
		printf("%s\n", ptr);
		return(0);
	}

	int tft_memset()
	{
		printf("FT_MEMSET\n");
		char b[] = "hallihallo";
		int c;
		size_t len;

		c = 65;
		len = 4;
		ft_memset(b, c, len);
		printf("%s\n", ft_memset(b, c, len));
		return(0);
	}

	int tft_memcpy()
	{
		printf("FT_MEMCPY\n");
		char dst[] = "hallihallo";
		char src[] = "lala";
		size_t n;
		
		n = 4;
		ft_memcpy(dst, src, n);
		printf("%s\n", ft_memcpy(dst, src, n));
		return(0);
	}
	
	int tft_memchr()
	{
		printf("FT_MEMCHR\n");
		const char s[] = "lalilu";
		char c;
		size_t n;
		
		c = 'i';
		n = 6;
		printf("%s\n", ft_memchr(s, c, n));
		
		return(0);
	}

	int tft_memcmp()
	{
		printf("FT_MEMCMP\n");
		char s1[] = "Apff";
		char s2[] = "Apfel";
		
		ft_memcmp(s1, s2, 4);
		printf("%d\n", ft_memcmp(s1, s2, 4));
		return(0);
	}

	int tft_memmove()
	{
		printf("FT_MEMMOVE\n");
		char dst[] = "Kuchenteller";
		char src[] = "Apfelkuchen";
		size_t len;

		len = 12;
		ft_memmove(dst, src, len);
		printf("%s\n", ft_memmove(dst, src, len));
		return(0);
	}

	int tft_atoi()
	{
		printf("FT_ATOI\n");
		 char str[] = "------8";
		// char str[] = "-9";
		int v;

		v = ft_atoi(str);
		printf("%d\n", v);
		return(0);
	}
int main()
{
	tft_isalnum();
	tft_isalpha();
	tft_isascii();
	tft_isdigit();
	tft_isprint();
	tft_toupper();
	tft_tolower();
	tft_bzero();
	tft_strlen();
	tft_strlcat();
	tft_strlcpy();
	tft_strncmp();
	tft_strnstr();
	tft_memset();
	tft_memcpy();
	tft_memchr();
	tft_memcmp();
	tft_memmove();
	tft_atoi();
	return(0);
}

