/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_match_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:22:46 by mganchev          #+#    #+#             */
/*   Updated: 2024/03/24 02:22:48 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**cross_match(char **input_arr, t_number *dict)
{
	int		i;
	int		j;
	char	**output_arr;

	i = 0;
	while (input_arr[i][0])
		i++;
	output_arr = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (input_arr[i][0])
	{
		j = 0;
		while (dict[j].key)
		{
			if (!ft_strcmp(input_arr[i], dict[j].key))
			{
				output_arr[i] = dict[j].value;
				break ;
			}
			j++;
		}
		i++;
	}
	output_arr[i] = (char *)"\0";
	return (output_arr);
}
