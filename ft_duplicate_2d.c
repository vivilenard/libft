/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate_2d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:56:15 by vlenard           #+#    #+#             */
/*   Updated: 2023/03/30 17:56:16 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**dupclicate_2d(char **str)
{
	int		i;
	int		size;
	char	**copy;

	size = 0;
	i = 0;
	if (!str || !*str)
		return (NULL);
	while (str[size])
		size++;
	copy = (char **) malloc(sizeof(char *) * (size + 1));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = ft_strdup(str[i]);
		if (!copy[i])
			return (NULL);
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
