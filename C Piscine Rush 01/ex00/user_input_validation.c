/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_input_validation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychu <ychu@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:39:11 by ychu              #+#    #+#             */
/*   Updated: 2024/03/16 18:12:31 by ychu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_number(char c)
{
	return (c >= '1' && c <= '4');
}

void	string_to_int(int *param, char *arr, int *valid)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 32)
	{
		if (is_number(arr[i]))
		{
			param[j] = arr[i] - '0';
			j++;
		}
		if (!is_number(arr[i]))
			valid[0] = 0;
		i += 2;
	}
	if (j != 16)
		valid[0] = 0;
}

void	are_spaces(char *arr, int *valid)
{
	int	i;

	i = 1;
	valid[0] = 1;
	while (i < 31)
	{
		if (arr[i] != ' ')
			valid[0] = 0;
		i += 2;
	}
}

int	*user_input_validation(char *arr)
{
	int	*param;
	int	*valid;

	valid = (int *)malloc(sizeof(int));
	param = (int *)malloc(16 * sizeof(int));
	are_spaces(arr, valid);
	string_to_int(param, arr, valid);
	if (valid[0])
		return (param);
	return (valid);
}
