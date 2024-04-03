/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:28:21 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/20 13:28:22 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	cap;
	int	is_prime;

	if (nb < 2)
		return (2);
	while (1)
	{
		nb++;
		is_prime = 1;
		i = 1;
		cap = nb / 2;
		while (++i <= cap && is_prime)
		{
			if (!(nb % i))
				is_prime = 0;
		}
		if (i > cap && is_prime)
			break ;
	}
	return (nb);
}
