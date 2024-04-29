/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:24:21 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/14 09:24:23 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*ptr_dst;
	size_t	s;
	size_t	s_dst;

	ptr_dst = dst;
	s = size;
	while (s-- && *ptr_dst)
		ptr_dst++;
	s_dst = ptr_dst - dst;
	if (s_dst == size)
		return (size + ft_strlen(src));
	return (s_dst + ft_strlcpy(ptr_dst, src, size - s_dst));
}
