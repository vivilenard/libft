#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *lst;
    lst = (t_list*)malloc(sizeof(*lst));
    if (!lst)
        return(NULL);
    hi->content = content;
    hi->next = NULL;
    return (lst);
}