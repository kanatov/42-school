/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:29:57 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/07 15:30:00 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	process(int num)
{
	char	c;
	int		leftover;
	int		numcut;

	c = '0';
	numcut = num / 10;
	leftover = num + (numcut * -10);
	c += leftover * -1;
	if (numcut != 0)
		process(numcut);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		num;

	num = nb;
	if (num >= 0)
	{
		num = -nb;
	}
	else
	{
		write(1, "-", 1);
	}
	process(num);
}
