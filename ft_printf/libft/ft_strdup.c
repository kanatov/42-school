/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:08:41 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/17 12:08:43 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = malloc(sizeof(*s) * (i + 1));
	if (!str)
		return (str);
	ft_memcpy(str, s, (size_t)i);
	str[i] = '\0';
	return (str);
}
