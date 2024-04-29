/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:55:24 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/09 20:55:25 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	if (!dest && !src)
		return (NULL);
	ptr_s = (unsigned char *)src;
	ptr_d = (unsigned char *)dest;
	if (ptr_s > ptr_d)
	{
		while (n-- > 0)
			*ptr_d++ = *ptr_s++;
	}
	else
	{
		ptr_s += n;
		ptr_d += n;
		while (n-- > 0)
			*--ptr_d = *--ptr_s;
	}
	return (dest);
}
