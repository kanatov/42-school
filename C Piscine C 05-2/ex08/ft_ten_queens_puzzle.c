/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:41:50 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/20 15:41:51 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = '0' + board[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check(int *board, int q, int p)
{
	int	x;
	int	y;

	x = q;
	while (--x >= 0)
	{
		if (board[x] == p)
			return (0);
	}
	x = q;
	y = p;
	while (--x >= 0 && --y >= 0)
	{
		if (board[x] == y)
			return (0);
	}
	x = q;
	y = p;
	while (--x >= 0 && ++y <= 9)
	{
		if (board[x] == y)
			return (0);
	}
	return (1);
}

void	find_queens(int *board, int q, int *match)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (check(board, q, i))
		{
			board[q] = i;
			if (q == 9)
			{
				print_board(board);
				*match += 1;
			}
			if (q < 9)
				find_queens(board, q + 1, match);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[11];
	int	match;

	match = 0;
	find_queens(board, 0, &match);
	return (match);
}
