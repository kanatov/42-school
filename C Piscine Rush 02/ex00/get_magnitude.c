/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_magnitude.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:29:41 by mganchev          #+#    #+#             */
/*   Updated: 2024/03/24 23:29:43 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_get_magnitude(char *str)
{
	int		n;
	int		len;
	char	*magnitude;

	n = ft_strlen(str);
	len = ft_strlen(str);
	if (len >= 4)
		while ((n - 1) % 3 != 0)
			n--;
	else
		n = len;
	magnitude = (char *)malloc(n + 1);
	magnitude[0] = '1';
	magnitude[n] = '\0';
	while (--n > 0)
		magnitude[n] = '0';
	return (magnitude);
}

char	*ft_get_magnitude_number(char *str)
{
	int		i;
	int		n;
	int		len;
	char	*number;

	len = ft_strlen(str);
	if (len >= 4)
	{
		n = (ft_strlen(str) - 1) % 3 + 1;
		number = (char *)malloc(n + 1);
		i = 0;
		while (i < n)
		{
			number[i] = str[i];
			i++;
		}
	}
	if (len <= 3)
	{
		n = 2;
		number = (char *)malloc(n);
		number[0] = str[0];
	}
	number[n] = '\0';
	return (number);
}
