/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:11:02 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/11 12:11:03 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_l;

	src_l = ft_strlen(src);
	if (size > src_l + 1)
		size = src_l + 1;
	ft_memcpy(dst, src, size);
	dst[size - 1] = '\0';
	return (src_l);
}
