/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_s_e.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:55:39 by vlenard           #+#    #+#             */
/*   Updated: 2023/03/30 17:55:40 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_s_e(char **args, int start, int end, char *c)
{
	int		i;
	char	*out;

	i = start;
	if (!args || !*args)
		return (NULL);
	if (i == end && args[i])
		return (args[i]);
	out = ft_calloc(sizeof(char), 1);
	while (i <= end && args[i])
	{
		out = ft_strjoin_free_opt(out, args[i], 1, 0);
		if (args[i + 1] && i < end)
			out = ft_strjoin_free_opt(out, c, 1, 0);
		i++;
	}
	return (out);
}
