/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:13 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/20 15:09:02 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	ci;

	ci = c;
	i = 0;
	while (i < n)
	{	
		if (((unsigned char *) s)[i] == ci)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
