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
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		cat_l;
	const char	*ptr_s;
	char		*ptr_d;

	ptr_s = src;
	ptr_d = dst;
	cat_l = ft_strlen(dst);
	if (size >= cat_l)
		ptr_d += cat_l;
	else
		cat_l = size;
	if (size >= cat_l)
		size -= cat_l;
	else
		size = 0;
	while (*ptr_s)
	{
		if (size && size-- > 1)
			*ptr_d++ = *ptr_s;
		ptr_s++;
		cat_l++;
	}
	if (dst != ptr_d && ptr_s != src)
		*ptr_d = '\0';
	return (cat_l);
}
