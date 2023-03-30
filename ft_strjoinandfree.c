/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinandfree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:25:48 by vlenard           #+#    #+#             */
/*   Updated: 2023/03/30 13:44:58 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freestrings(char *s1, char *s2)
{
	if (s1)
		free (s1);
	if (s2)
		free (s2);
}

char	*ft_strjoinandfree(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	n;

	if (!s1)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	n = 0;
	while (s1 && s1[i])
		str[i++] = s1[n++];
	n = 0;
	while (s2 && s2[n])
		str[i++] = s2[n++];
	str[i] = '\0';
	freestrings(s1, s2);
	return (str);
}
