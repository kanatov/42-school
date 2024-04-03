/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:06:07 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/07 13:06:33 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b)
{
	char	aa;
	char	ab;
	char	ba;
	char	bb;

	aa = '0';
	ab = '0';
	ab = ab + (a % 10);
	aa = aa + (a - (a % 10)) / 10;
	ba = '0';
	bb = '0';
	bb = bb + (b % 10);
	ba = ba + (b - (b % 10)) / 10;
	write(1, &aa, 1);
	write(1, &ab, 1);
	write(1, " ", 1);
	write(1, &ba, 1);
	write(1, &bb, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != 0 || b != 1)
				write(1, ", ", 2);
			print(a, b);
			b++;
		}
		a++;
	}
}
