/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:13 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/18 15:51:43 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	i = 0;

	while (i < n)
	{	
		if (((unsigned char *) s)[i] == c)
			return(&s[i]);
		i++;
	}
	return(NULL);
}
