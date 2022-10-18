/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:09:52 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/18 09:56:59 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	int		dstlen1;

	dstlen1 = ft_strlen(dst);
	i = 0;
	n = ft_strlen(dst);
	if (ft_strlen(src) > 0)
	{
		while (src[i] != '\0' && i < (dstsize - ft_strlen(dst) - 2))
		{
			dst[n + i] = src[i];
			i++;
		}
		dst[n + i] = '\0';
	}
	return (dstlen1);
}
