/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:33:27 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/29 10:33:30 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	convert(int n, int fd)
{
	if (n <= -10)
		convert(n / 10, fd);
	ft_putchar_fd('0' + -(n % 10), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
		n = -n;
	else
		ft_putchar_fd('-', fd);
	convert(n, fd);
}
