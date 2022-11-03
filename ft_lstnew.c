/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:26:35 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/03 10:26:38 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *lst;
    lst = (t_list*)malloc(sizeof(*lst));
    if (!lst)
        return(NULL);
    lst->content = content;
    lst->next = NULL;
    return (lst);
}