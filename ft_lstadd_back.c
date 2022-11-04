/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:32:39 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/04 19:20:33 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !*lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	
	else if (*lst != NULL)
	{
		*lst = ft_lstlast(*lst);
		(*lst)->next = new;
	}
}
