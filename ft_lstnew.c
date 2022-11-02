#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *hi;
    hi = (t_list*)malloc(sizeof(*hi));
    hi->content = content;
    hi->next = NULL;
    return (hi);
}