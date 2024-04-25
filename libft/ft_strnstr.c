/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:33:07 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/15 19:33:09 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_l;

	size_l = ft_strlen(little);
	if (!size_l)
		return ((char *)big);
	i = 0;
	while (big[i] && (size_l + i <= len))
	{
		j = 0;
		while (j < size_l && (big[i + j] == little[j]))
			j++;
		if (j == size_l)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
