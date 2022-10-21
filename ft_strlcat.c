/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:09:52 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/20 14:28:01 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	dstlen;

	i = 0;
	n = ft_strlen(dst);
	if (ft_strlen(src) > 0)
	{
		while (i < (dstsize - n - 1))
		{
			dst[(n - 1) + 1 + i] = src[i];
			i++;
		}
	}
	if (dstsize != 0)
	{
		dst[dstsize - 1] = '\0';
	}
	dstlen = ft_strlen(dst);
	return (dstlen);
}