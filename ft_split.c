/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:27:05 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/31 18:36:28 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_countstrs(char const *s, char c)
{
	int i;
	int count;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && i != 0)
			count++;
		i++;
	}
	return (count + 1);
}

int ft_splitlen(char *strbuff, int c)
{
	int i;
	i = 0;
	while (strbuff[i] != c && strbuff[i] != '\0')
		i++;
	return(i);
}

int ft_howmanyc(char *strbuff, char c, int count, int flag)
{
	while (strbuff[count] == c)
	{
		count++;
		flag++;
	}
	if (strbuff[count] == '\0')
		return(-1);
	return(flag);
}

void ft_assignstrs(char *strbuff, char **split, int c, int n, int start)
{
	int count;
	int flag;
	strbuff = ft_strdup(strbuff + start);
	split[n] = malloc((ft_splitlen(strbuff, c) + 1) * sizeof(char));
	ft_strlcpy(split[n], strbuff, ft_splitlen(strbuff, c) + 1);
	printf("STRING: %s\n", split[n]);
	printf("String laenge: %zu\n", ft_strlen(split[n]));
	printf("splitlen is %d\n", ft_splitlen(strbuff, c));
	free(strbuff);
	count = 0;
	flag = 0;
	while (strbuff[count] != '\0')
	{
		if (strbuff[count] == c)
		{ 
			flag = ft_howmanyc(strbuff, c, count, flag);
			break;
		}
		count++;
	}
	printf("%d\n", flag);
	if (flag > 0)
		ft_assignstrs(strbuff, split, c, n++, ft_splitlen(strbuff, c) + flag);
}

char **ft_split(char const *s, char c)
{
	char **split;
	char *strbuff;
	int n;
	int i;
	i = 0;
	n = 0;
	if (!(split = malloc((ft_countstrs(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i] == c)
		i++;
	strbuff = ft_strdup(s + i);
	ft_assignstrs(strbuff, split, c, n, 0);
	
	return(split);
}
