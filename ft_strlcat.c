/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:09:52 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/17 17:40:58 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t n;

	i = 0;
	n = ft_strlen(dst);
	if (src[i] > 0)
	{
		while (src[i] != '\0' && i < (dstsize - ft_strlen(dst) - 1))
		{
			dst[i + n] = src[i];
			i++;
		}
		dst[dstsize] = '\0';
	}
	return (i + n - 1);
}
