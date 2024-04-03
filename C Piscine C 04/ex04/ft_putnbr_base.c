/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:53:41 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/14 15:53:43 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	iterate(int nbrn, char *base, int n)
{
	int	r;

	r = nbrn % n;
	nbrn = nbrn / n;
	if (nbrn)
		iterate(nbrn, base, n);
	write(1, &base[-r], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	n = is_valid(base);
	if (n)
	{
		if (nbr < 0)
			write(1, "-", 1);
		if (nbr > 0)
			nbr = -nbr;
		iterate(nbr, base, n);
	}
}
