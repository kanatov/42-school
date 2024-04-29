/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:38:23 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/29 10:38:24 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_ls;

	new_ls = malloc(sizeof(t_list));
	if (!new_ls)
		return (NULL);
	new_ls->content = content;
	new_ls->next = NULL;
	return (new_ls);
}
