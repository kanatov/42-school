#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ls;

    if (!lst)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    ls = *lst;
    while (ls->next)
        ls = ls->next;
    ls->next = new;
    new->next = NULL;
}
