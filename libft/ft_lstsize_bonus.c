/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:38:45 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/29 10:38:46 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ls;

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
