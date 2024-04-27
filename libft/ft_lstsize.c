#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *ls;

    if (!lst)
        return (0);
    ls = lst;
    i = 1;
    while (ls->next)
    {
        ls = ls->next;
        i++;
    }
    return (i);
}