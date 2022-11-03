/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:27:05 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/03 14:54:40 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_howmanyc(char *s, char c, int count, int flag)
{
	while (s[count] == c)
	{
		count++;
		flag++;
	}
	if (s[count] == '\0')
		return(-1);
	return(flag);
}

int ft_countstrs(char *s, char c)
{
	int i;
	int count;
	int flag;
	i = 0;
	count = 0;
	flag = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		flag = ft_howmanyc(s, c, i, 0);
		if (flag > 0)
		{
			count++;
			i = i + flag;
		}
		else if (flag == 0)
			i++;
		else if (flag < 0)
			return (count + 1);
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

void ft_assignstrs(char *strbuff, char **split, int c, int n, int start)
{
	int count;
	int flag;
	char *strbuff1;
	strbuff1 = ft_strdup(strbuff + start);
	free(strbuff);
	strbuff = NULL;
	split[n] = malloc((ft_splitlen(strbuff1, c) + 1) * sizeof(char));
	ft_strlcpy(split[n], strbuff1, ft_splitlen(strbuff1, c) + 1);
				//printf(" STRING: %s, n = %d\n", split[n], n);
				// printf("String laenge: %zu\n", ft_strlen(split[n]));
				// printf("splitlen is %d\n", ft_splitlen(strbuff1, c));
	count = 0;
	flag = -1;
	while (strbuff1[count] != '\0')
	{
		if (strbuff1[count] == c)
		{ 
			flag = ft_howmanyc(strbuff1, c, count, 0);
			break;
		}
		count++;
	}
	//printf("%d\n", flag);
	if (flag > 0)
		ft_assignstrs(strbuff1, split, c, n + 1, ft_splitlen(strbuff1, c) + flag);
	if (flag < 0)
	{
		free(strbuff1);
		strbuff1 = NULL;
	}
}

char **ft_split(char const *s, char c)
{
	char **split;
	char *strbuff;
	int n;
	int i;
	int	strcount;
	i = 0;
	n = 0;
	if (!s)
		return(NULL);
	strcount = ft_countstrs((char *)s, c);
		//printf("how many strings: %d\n", strcount);
	if (!(split = malloc((strcount + 1) * sizeof(char *))))
		return (NULL);
	if (strcount > 0)
	{
		while (s[i] == c)
			i++;
		strbuff = ft_strdup(s + i);
		ft_assignstrs(strbuff, split, c, n, 0);
			// printf("leftover Strbuff %s\n", strbuff);
	}
	split[strcount] = NULL;
	return(split);
}
