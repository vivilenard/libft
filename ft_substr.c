/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:33:45 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/02 18:33:33 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_truelen(char const *s, unsigned int start, size_t len)
{
	size_t	truelen;
	truelen = 0;
	while (s[start])
	{
		start++;
		len++;
	}
	if(truelen < len)
		return(truelen);
	return(len);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	ss = malloc((ft_truelen(s, start, len) + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
