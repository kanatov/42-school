/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychu <ychu@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:26:02 by ychu              #+#    #+#             */
/*   Updated: 2024/03/16 18:14:29 by ychu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		**parse_param(int *param);
int		*user_input_validation(char *arr);
void	print_board(int **board);
void	puzzle_solver_logic(int **board);

int	main(int n, char **arr)
{
	int	**board;
	int	e;
	int	*param;

	e = 1;
	if (n == 2 && arr[1][32] != '\0')
	{
		param = user_input_validation(arr[1]);
		if (param[0])
		{
			e = 0;
			board = parse_param(param);
			puzzle_solver_logic(board);
			print_board(board);
		}
	}
	if (e)
		write(1, "Error\n", 6);
	return (0);
}
