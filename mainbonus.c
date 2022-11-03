#include "libft.h"

void    tft_lstnew()
{
    t_list *lst;
    int i;
    i = 5;
    printf("%p\n", &i);
    lst = ft_lstnew(&i);

    printf("%p\n", lst->content);
    
}

void tft_lstadd_ftont()
{
    t_list **lst;
    t_list *new;
    int i = 5;
    new = ft_lstnew(&i);
    ft_lstadd_front(lst,new);
}

int main ()
{
    tft_lstnew();
    tft_lstadd_front();
    return (0);
}
