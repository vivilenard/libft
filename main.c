/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:34:33 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/28 15:48:00 by vlenard          ###   ########.fr       */
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

	int tft_strchr(void)
	{
		printf("FT_STRCHR\n");
		char s[] = "jodhooooohfoi";
		unsigned char c;
		
		c = '\0';
		printf("%s\n", ft_strchr(s, c));
		printf("%d\n", c);
		
		return(0);
	}

	int tft_strrchr(void)
	{
		printf("FT_STRRCHR\n");
		char s[] = "ajedohfjeeefoi";
		unsigned char c;
		
		c = 'y';
		printf("%s\n", ft_strrchr(s, c));
		// printf("%d\n", c);
		return(0);
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

		len = 9;
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
		char dst[] = "Hallo";
		char src[] = "Loliiiii";
		size_t len;

		len = 4;
		ft_memmove(dst, src, len);
		printf("str is %zu dst is %zu\n", (size_t)src, (size_t)dst);
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

	int tft_calloc ()
	{

		printf("FT_CALLOC\n");
		size_t n;
		size_t size;
		char *a;

		n = SIZE_MAX;
		size = (sizeof(char));

		a = ft_calloc(n, size);
		printf("%s\n", a);
		return (0);
	}

	int tft_strdup ()
	{
		printf("FT_STRDUP\n");
		char s[] = "laljiejija";
		char *scpy;
		scpy = ft_strdup(s);
		printf("%s\n", scpy);
		free(scpy);
		return (0);
	}

	int tft_substr()
	{
		printf("FT_SUBSTR\n");
		char s[] = "";
		int start;
		size_t len;
		
		start = 7;
		len = 1;
		
		printf("%s\n", ft_substr(s, start, len));
		return (0);
	}
	
	int tft_strjoin ()
	{
		printf("FT_STRJOIN\n");
		char s1[] = "hi";
		char s2[] = "dulappen";
		char *s;
		s = ft_strjoin(s1, s2);
		printf("Ergebnis: %s\n", s);
		return (0);
	}

	int tft_strtrim ()
	{
		printf("FT_STRTRIM\n");
		char s1[] = "apfe";
		char set[] = "a";
		
		printf("%s\n", ft_strtrim(s1, set));
		return (0);
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
	tft_strchr();
	tft_strrchr();
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
	tft_calloc();
	tft_strdup();
	tft_substr();
	tft_strjoin();
	tft_strtrim();
	return(0);
}

