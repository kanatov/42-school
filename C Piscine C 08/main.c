/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:22:59 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/06 15:23:21 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "ex02/ft_abs.h"
#include "ex04/ft_strs_to_tab.c"
// #include "ex01/ft_recursive_factorial.c"
// #include "ex02/ft_iterative_power.c"
// #include "ex03/ft_recursive_power.c"
// #include "ex04/ft_fibonacci.c"
// #include "ex05/ft_sqrt.c"
// #include "ex06/ft_is_prime.c"
// #include "ex07/ft_find_next_prime.c"
// #include "ex08/ft_ten_queens_puzzle.c"

int	main(int n, char **av)
{
	// printf("%d\n", ABS(-5));
	// printf("%d\n", ABS(-5));
	
	ft_strs_to_tab(n, av);
	return (0);
}
// norminette -R CheckForbiddenSourceHeader
// norminette -R CheckDefine
