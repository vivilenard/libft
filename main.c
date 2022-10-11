/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:26:32 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/11 13:33:19 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strlcpy(char *dest, char *src);

int main()
{
    char *src = "hihihi";
    char *dest = "la";
    printf("%s", ft_strlcpy(dest, src));
    return (0);
}