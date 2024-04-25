/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:35:46 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/17 21:35:47 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	end = ft_strlen(s1);
	len = end;
	if (!end || !ft_strlen(set))
		return (ft_strdup(s1));
	end--;
	while (start <= end && ft_strrchr(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (end > start && ft_strrchr(set, s1[end]))
		end--;
	str = ft_substr(s1, start, len - start - (len - end) + 2);
	return (str);
}
