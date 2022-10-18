/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:20:12 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/18 10:54:37 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (i + 1 == len)
			break ;
		if (haystack[i] == needle[0])
		{
			n = 0;
			while (haystack[i + n] == needle[0 + n]
				&& (haystack[i + n] != '\0' && needle[0 + n] != '\0'))
			{
				if (needle[0 + n + 1] == '\0')
					return (&haystack[i]);
				n++;
			}
		}
		i++;
	}
	return (NULL);
}
