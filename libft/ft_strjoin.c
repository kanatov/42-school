/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:59:43 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/17 20:59:44 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_l;
	size_t	s2_l;
	char	*src;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	src = malloc(sizeof(s1) * (s1_l + s2_l + 1));
	if (!src)
		return (NULL);
	ft_strlcpy(src, s1, s1_l + 1);
	ft_strlcpy(src + s1_l, s2, s2_l + 1);
	return (src);
}
