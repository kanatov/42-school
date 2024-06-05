/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:42:56 by ikanatov          #+#    #+#             */
/*   Updated: 2024/06/04 23:42:57 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*substring(int start, int length, char *str)
{
	char	*substr;
	int		i;

	substr = malloc(sizeof(char) * (length + 1));
	i = 0;
	while (str[i] && i < length)
	{
		substr[i] = str[i + start];
		i++;
	}
	substr[length] = '\0';
	return (substr);
}

int	ft_strlen(char *str)
{
	char	*str_l;

	if (!str)
		return (0);
	str_l = str;
	while (*str_l)
		str_l++;
	return (str_l - str);
}

char	*concat(char *str, char *buffer)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(buffer) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	if (str)
	{
		while (str[j])
			new_str[i++] = str[j++];
	}
	j = 0;
	while (buffer[j])
		new_str[i++] = buffer[j++];
	new_str[i] = '\0';
	return (new_str);
}