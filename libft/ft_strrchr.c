/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:34:21 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/15 12:34:22 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	int		i;

	ptr_s = NULL;
	i = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			ptr_s = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		ptr_s = (char *)&s[i];
	return (ptr_s);
}
