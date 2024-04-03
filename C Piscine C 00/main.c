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

// #include "ex00/ft_putchar.c"
// #include "ex01/ft_print_alphabet.c"
// #include "ex02/ft_print_reverse_alphabet.c"
// #include "ex03/ft_print_numbers.c"
// #include "ex04/ft_is_negative.c"
// #include "ex05/ft_print_comb.c"
// #include "ex06/ft_print_comb2.c"
// #include "ex07/ft_putnbr.c"
#include "ex08/ft_print_combn.c"

int	main(void)
{
	/*
	ft_putchar('b');
	write(1, "\n", 1);
	ft_print_alphabet();
	write(1, "\n", 1);
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	ft_print_numbers();
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(100);
	write(1, "\n", 1);
	ft_is_negative(-100);
	write(1, "\n", 1);
				*/
	// ft_print_comb();
	// write(1, "\n", 1);

	// ft_print_comb2();
	// write(1, "\n", 1);
	// ft_putnbr(10000);
	// write(1, "\n", 1);
	ft_print_combn(8);
	return (0);
}

// norminette -R CheckForbiddenSourceHeader
// find . -name "*.c" -execdir norminette -R CheckForbiddenSourceHeader {} \; 
// -2147483648 0 2147483647