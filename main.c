/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:34:33 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/17 17:37:48 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		size_t dstsize = 8;
		char dst[] = "Hallo ";
		char src[] = "du";
		
		printf("%s\n", src);
		printf("%s\n", dst);
		printf("%zu\n", ft_strlen(dst));
		printf("%zu\n", ft_strlen(src));

		ft_strlcat(dst, src, dstsize);
		printf("%s\n", dst);
		printf("%zu\n", ft_strlcat(dst, src, dstsize));
		return(0);
	}

	int tft_strlcpy()
	{
		printf("FT_STRLCPY\n");
		
		const char src[] = "hallo";
		char dst[6];
		size_t dstsize = 6;
		ft_strlcpy(dst, src, dstsize);
		printf("%s\n", dst);
		printf("%zu\n", ft_strlcpy(dst, src, dstsize));
		return(0);
	}

int main()
{
	tft_strlen();
	tft_strlcat();
	tft_strlcpy();
	return(0);
}

