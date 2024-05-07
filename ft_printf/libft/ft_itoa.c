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

static int	ilen(int n)
{
	int	i;

	i = 0;
	while (n <= -10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		rest;

	i = 1;
	if (n < 0)
		i++;
	rest = n;
	if (n > 0)
		rest = -rest;
	i += ilen(rest);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	*(str + i) = '\0';
	while (i--)
	{
		*(str + i) = '0' + -(rest % 10);
		rest /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
