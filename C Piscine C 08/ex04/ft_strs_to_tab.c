/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:34:54 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/21 13:34:56 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int	i;
	int j;

	stock = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	i = 0;

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stock[i].size = j;
		stock[i].str = av[i];
		// stock[i].copy = ft_strdup(av[i]);
		// stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}

	printf("%d, %s, %p", stock[0].size, stock[0].str, (*(stock+1)).str);
	return (0);
}
