#include "libft.h"

void    tft_lstnew()
{
	printf("LSTNEW\n");
    t_list *lst;
    int i = 5;
    lst = ft_lstnew((void *)i);
    // printf("%i\n", lst->content);
    
}

void tft_lstadd_front()
{
	printf("LSTADDFRONT\n");
    t_list **lst;
    t_list *new;
    int i = 5;
    *lst = ft_lstnew(i);
	new = ft_lstnew(i);
    ft_lstadd_front(lst,new);
	printf("%i\n", (*lst)->content);
	printf("%i\n", new->content);
}

int main ()
{
    tft_lstnew();
    tft_lstadd_front();
    return (0);
}
