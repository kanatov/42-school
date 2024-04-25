/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:26:22 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/17 13:26:23 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (!len)
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (start + 1 > s_len)
		return (ft_strdup(""));
	if (start + len > s_len + 1)
		len = s_len - start + 1;
	str = malloc(sizeof(*s) * (len));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len);
	return (str);
}
