/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:45:49 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/19 17:45:50 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	number;

	if (power < 0)
		return (0);
	if (!power)
		return (1);
	number = nb;
	while (--power)
		number *= nb;
	return (number);
}
