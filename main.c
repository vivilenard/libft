/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:34:33 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/18 15:52:38 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	int tft_isprint()
	{
		printf("FT_ISPRINT\n");
		char c;
		c = '~';
		
		printf("%d\n", ft_isprint(c));
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
		size_t dstsize = 3;
		char dst[] = "Hallo ";
		char src[] = "du";
		
		printf("%s\n", dst);
		printf("%zu\n", ft_strlen(dst));
		printf("%s\n", src);
		printf("%zu\n", ft_strlen(src));

		ft_strlcat(dst, src, dstsize);
		printf("result is:\n");
		printf("%s\n", dst);
		printf("%zu\n", ft_strlcat(dst, src, dstsize));
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
		char s1[] = "Al";
		char s2[] = "Apfel";
		
		ft_strncmp(s1, s2, 3);
		printf("%d\n", ft_strncmp(s1, s2, 3));

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
		return(0);
	}

	int tft_memmove()
	{
		printf("FT_MEMMOVE\n");
		return(0);
	}

int main()
{
	tft_isprint();
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
	return(0);
}

