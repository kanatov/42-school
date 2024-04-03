/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:06:58 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/25 13:06:59 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	join_strings(char *joint, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	joi;

	i = 0;
	joi = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			joint[joi] = strs[i][j];
			j++;
			joi++;
		}
		j = 0;
		i++;
		while (i < size && sep[j])
		{
			joint[joi] = sep[j];
			j++;
			joi++;
		}
	}
	joint[joi] = '\0';
}

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	length;
	int	sep_length;

	i = 0;
	length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			length++;
			j++;
		}
		i++;
	}
	sep_length = 0;
	j = 0;
	while (sep[j++])
		sep_length++;
	length += (size - 1) * sep_length + 1;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		length;

	if (size < 1)
		return ((char *)malloc(0));
	length = get_size(size, strs, sep);
	join = (char *)malloc(sizeof(char) * length);
	if (join == NULL)
		return (NULL);
	join_strings(join, size, strs, sep);
	return (join);
}
