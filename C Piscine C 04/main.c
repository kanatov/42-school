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
// #include "ex00/ft_strlen.c"
// #include "ex01/ft_putstr.c"
// #include "ex02/ft_putnbr.c"
// #include "ex03/ft_atoi.c"
// #include "ex04/ft_putnbr_base.c"
#include "ex05/ft_atoi_base.c"

int	main(void)
{
	// ft_atoi.c
	// char s[] = "   +---+400g";
	// printf("s: %d\n", ft_atoi(s));

	// char s2[] = " \t\b\v\f  +---+0g";
	// printf("s2: %d\n", ft_atoi(s2));

	// char s3[] = " \t\b\v\f  +---    +10g";
	// printf("s3: %d\n", ft_atoi(s3));

	// char s4[] = "-10g";
	// printf("s4: %d\n", ft_atoi(s4));

	// char s5[] = "10  g";
	// printf("s5: %d\n", ft_atoi(s5));

	//ft_str_is_lowercase.c
	// ft_putnbr_base(0, "0123456789");
	// write(1, "\n", 1);
	// ft_putnbr_base(10, "0123456789");
	// write(1, "\n", 1);
	// ft_putnbr_base(-999, "0123456789");
	// write(1, "\n", 1);
	// ft_putnbr_base(-999, "0123456789ABCDEF");
	// write(1, "\n", 1);
	// ft_putnbr_base(999, "01");
	// ft_putnbr_base(0, "");
	// ft_putnbr_base(0, "70123456789");
	// ft_putnbr_base(0, "1");
	// ft_putnbr_base(0, "");
	// ft_putnbr_base(0, "0123-456789");

	//ft_atoi_base.c
	char s[] = "   +---+400g";
	printf("s: %d\n", ft_atoi_base(s, "0123456789"));

	char s2[] = " \t\v\f  +---+01";
	printf("s2: %d\n", ft_atoi_base(s2, "0123456789"));

	char s3[] = " \t\b\v\f  +---+10 ";
	printf("s3: %d\n", ft_atoi_base(s3, "0123456789"));

	char s4[] = "     +++--FF88AAa";
	printf("s4: %d\n", ft_atoi_base(s4, "0123456789ABCDEF"));

	char s5[] = "    +++--101101  g";
	printf("s5: %d\n", ft_atoi_base(s5, "01"));

	char s6[] = " \t\v\f  +---+FF ";
	printf("s6: %d\n", ft_atoi_base(s6, "0123456789ABCDEF"));

	char s7[] = "     +---59";
	printf("s7: %d\n", ft_atoi_base(s7, "0123456789ABCDEF"));
	return (0);
}
// norminette -R CheckForbiddenSourceHeader
