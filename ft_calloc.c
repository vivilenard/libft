/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:42:57 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/27 11:42:57 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size > sizeof(unsigned int))
		return (NULL);
	ptr = malloc(n * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, size * n);
	return (ptr);
}
