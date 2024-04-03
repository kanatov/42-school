/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:50:36 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/16 23:57:11 by mimacdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_board(int **arr, int *param)
{
	arr[0][1] = param[0];
	arr[0][2] = param[1];
	arr[0][3] = param[2];
	arr[0][4] = param[3];
	arr[5][1] = param[4];
	arr[5][2] = param[5];
	arr[5][3] = param[6];
	arr[5][4] = param[7];
	arr[1][0] = param[8];
	arr[2][0] = param[9];
	arr[3][0] = param[10];
	arr[4][0] = param[11];
	arr[1][5] = param[12];
	arr[2][5] = param[13];
	arr[3][5] = param[14];
	arr[4][5] = param[15];
}

int	**parse_param(int *param)
{
	int	a;
	int	b;
	int	r;
	int	**arr;

	a = 6;
	b = 6;
	r = 0;
	arr = (int **)malloc(a * sizeof(int *));
	while (r < a)
	{
		arr[r] = (int *)malloc(b * sizeof(int));
		r++;
	}
	fill_board(arr, param);
	return (arr);
}
