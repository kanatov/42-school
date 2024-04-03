/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_match_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:55:22 by mganchev          #+#    #+#             */
/*   Updated: 2024/03/23 21:55:24 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	**breakdown_nbr(char *number)
{
	int		l;
	int		i;
	int		j;
	char	**arr;

	l = ft_strlen(number);
	arr = (char **)malloc(sizeof(char *) * (l + 1));
	i = 0;
	while (i < l)
	{
		j = 0;
		arr[i] = (char *)malloc(sizeof(char) * (l - i + 1));
		while (j < l - i)
		{
			arr[i][j] = '0';
			if (j == 0)
				arr[i][j] = number[i];
			j++;
		}
		i++;
	}
	arr[i] = (char *)"\0";
	return (arr);
}
