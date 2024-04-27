#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_ls;

    new_ls = malloc(sizeof(t_list));
    if (!new_ls)
        return (NULL);
    new_ls->content = content;
    new_ls->next = NULL;
    return (new_ls);
}
