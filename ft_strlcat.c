/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:09:52 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/02 18:21:07 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t idst;
	size_t initialdstsize;
	size_t i;

	initialdstsize = ft_strlen(dst);
	idst = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= initialdstsize)
		return (dstsize + ft_strlen(src));
	while (idst < dstsize - 1 && src[i])
	{
		dst[idst] = src[i];
		idst++;
		i++;
	}
	dst[idst] = '\0';
	return (initialdstsize + ft_strlen(src));
}






/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(dst);
	while (i < (dstsize - (n + 1)) && src[i] != '\0')
	{
		dst[n + i] = src[i];
		i++;
	}
	if (i > 0)
	{
		dst[i + n] = '\0';
	}
	printf("i bims dst %s\n", dst);
	return (ft_strlen(dst));
}
*/