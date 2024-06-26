/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:55:38 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/11 18:55:42 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	ii;

	i = 0;
	ii = size - 1;
	while (i < ii)
	{
		tmp = tab[i];
		tab[i] = tab[ii];
		tab[ii] = tmp;
		i++;
		ii--;
	}
}
