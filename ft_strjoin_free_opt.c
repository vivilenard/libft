/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_opt.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:26:34 by vlenard           #+#    #+#             */
/*   Updated: 2023/03/30 17:41:36 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*free_opt(char *str, int opt)
// {
// 	if (opt && str != NULL)
// 		free(str);
// 	return (str);
// }

// char	*ft_strjoin_free_opt(char *s1, char *s2, int free_s1, int free_s2)
// {
// 	char	*str;
// 	size_t	i;
// 	size_t	len;
// 	size_t	n;

// 	len = ft_strlen(s1) + ft_strlen(s2) + 1;
// 	str = malloc(len * sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (str[i] && s1[i])
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	n = 0;
// 	while (str[i] && s2[n])
// 		str[i++] = s2[n++];
// 	str[len - 1] = '\0';
// 	s1 = free_opt(s1, free_s1);
// 	s2 = free_opt(s2, free_s2);
// 	return (str);
// }

char	*ft_strjoin_free_opt(char *s1, char *s2, int free_s1, int free_s2)
{
	char	*str;
	size_t	i;
	size_t	len;
	size_t	n;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2 && s2[n] != '\0')
	{
		str[i] = s2[n];
		i++;
		n++;
	}
	str[len - 1] = '\0';
	if (free_s1 && s1 != NULL)
		free (s1);
	if (free_s2 && s2 != NULL)
		free (s2);
	if (ft_strlen(str) == 0)
		return (free(str), NULL);
	return (str);
}
