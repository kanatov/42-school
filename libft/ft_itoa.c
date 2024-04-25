/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:52:33 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/23 21:52:34 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	convert(char *str, int n)
{
	if (n <= -10)
		convert(str, n / 10);
	str[ft_strlen(str)] = '0' + -(n % 10);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*str_t;

	str = ft_calloc(12, sizeof(char));
	if (n >= 0)
		n = -n;
	else
		str[0] = '-';
	convert(str, n);
	str_t = ft_strdup(str);
	free(str);
	return (str_t);
}
