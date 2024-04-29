#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *ls;

    ls = lst;
    while (ls)
    {
        f(ls->content);
        ls = ls->next;
    }
}
