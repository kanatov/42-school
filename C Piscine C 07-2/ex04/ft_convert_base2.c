/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:38:42 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/25 16:38:43 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_pow(int n, int ex)
{
	int	i;
	int	number;

	i = 0;
	number = n;
	while (i < ex)
	{
		number *= n;
		i++;
	}
	if (!(ex + 1))
		number = 1;
	return (number);
}

int	to_n(char *nbr, char *base, int depth, int str_size)
{
	int	match;
	int	j;
	int	i;
	int	p;

	i = 0;
	j = 0;
	match = 0;
	while (base[i])
	{
		if (!match)
		{
			if (*nbr == base[i])
				match = 1;
			j++;
		}
		i++;
	}
	p = get_pow(i, str_size - depth - 2);
	j--;
	nbr++;
	depth++;
	if (str_size - depth)
		j = j * p + to_n(nbr, base, depth, str_size);
	return (j);
}

char	*get_clean_nbr(int k, int i, char *nbr, int j)
{
	char	*clean_nbr;

	clean_nbr = (char *)malloc(sizeof(char) * (k + 1));
	if (clean_nbr == NULL)
		return (NULL);
	j = 0;
	while (j < k)
	{
		clean_nbr[j] = nbr[i + j];
		j++;
	}
	clean_nbr[j] = '\0';
	return (clean_nbr);
}

char	*clean(char *nbr, char *base_from, int *nbr_s, int i)
{
	int		j;
	int		k;
	int		match;

	k = 0;
	while (nbr[i + k])
	{
		match = 0;
		j = 0;
		while (!match && base_from[j])
		{
			if (nbr[i + k] == base_from[j])
				match = 1;
			j++;
		}
		if (!match)
			break ;
		k++;
	}
	if (!k)
		return (NULL);
	*nbr_s = k;
	return (get_clean_nbr(k, i, nbr, j));
}
