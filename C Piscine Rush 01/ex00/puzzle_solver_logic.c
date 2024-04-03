/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_solver_logic.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:51:15 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/16 17:51:17 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	method_1_4_1_x_x_3(int *arr);
void	method_1_4_2_x_x_3(int *arr);
void	method_1_4_3_x_x_3(int *arr);
void	method_1_4_x_1_x_3(int *arr);
void	method_1_x_x_x_x_2(int *arr);
void	method_2_1_4_x_x_3(int *arr);
void	method_2_2_4_x_x_3(int *arr);
void	method_2_3_4_x_x_3(int *arr);
void	method_2_3_x_2_x_3(int *arr);
void	method_2_x_4_2_x_3(int *arr);
void	method_2_x_x_x_x_3(int *arr);
void	method_2_x_x_2_x_2(int *arr);
void	method_4(int *arr);
void	method_fill(int *arr);
void	method_1(int *arr);

void	solving_methods(int *slice)
{
	method_4(slice);
	method_1(slice);
	method_1_x_x_x_x_2(slice);
	method_1_4_2_x_x_3(slice);
	method_1_4_3_x_x_3(slice);
	method_1_4_x_1_x_3(slice);
	method_2_2_4_x_x_3(slice);
	method_2_3_4_x_x_3(slice);
	method_2_x_4_2_x_3(slice);
	method_2_x_x_x_x_3(slice);
	method_2_1_4_x_x_3(slice);
	method_1_4_1_x_x_3(slice);
	method_2_x_x_2_x_2(slice);
	method_2_3_x_2_x_3(slice);
	method_fill(slice);
}

void	set_slice(int **board, int *slice, int s)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (s == 0)
			board[i][1] = slice[i];
		if (s == 1)
			board[i][2] = slice[i];
		if (s == 2)
			board[i][3] = slice[i];
		if (s == 3)
			board[i][4] = slice[i];
		if (s == 4)
			board[1][i] = slice[i];
		if (s == 5)
			board[2][i] = slice[i];
		if (s == 6)
			board[3][i] = slice[i];
		if (s == 7)
			board[4][i] = slice[i];
		i++;
	}
}

void	get_slice_data(int **board, int *slice, int i, int s)
{
	if (s == 0)
		slice[i] = board[i][1];
	if (s == 1)
		slice[i] = board[i][2];
	if (s == 2)
		slice[i] = board[i][3];
	if (s == 3)
		slice[i] = board[i][4];
	if (s == 4)
		slice[i] = board[1][i];
	if (s == 5)
		slice[i] = board[2][i];
	if (s == 6)
		slice[i] = board[3][i];
	if (s == 7)
		slice[i] = board[4][i];
}

int	*get_slice(int **board, int s)
{
	int	*slice;
	int	i;

	slice = (int *)malloc(6 * sizeof(int));
	i = 0;
	while (i < 6)
	{
		get_slice_data(board, slice, i, s);
		i++;
	}
	return (slice);
}

void	puzzle_solver_logic(int **board)
{
	int	i;
	int	j;
	int	*slice;

	i = 0;
	j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			slice = get_slice(board, j);
			if (!slice[1] || !slice[2] || !slice[3] || !slice[4])
			{
				solving_methods(slice);
			}
			set_slice(board, slice, j);
			j++;
		}
		i++;
	}
}
