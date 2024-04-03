/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:38:19 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/25 16:38:20 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		to_n(char *nbr, char *base, int depth, int str_size);
char	*clean(char *nbr, char *base_from, int *nbr_s, int i);

// FROM N TO 10
void	iterate(int nbrn, char *base, int base_to_s, char *number)
{
	int	r;
	int	i;

	if (nbrn > 0)
		nbrn = -nbrn;
	r = nbrn % base_to_s;
	nbrn = nbrn / base_to_s;
	if (nbrn)
		iterate(nbrn, base, base_to_s, number);
	i = 0;
	while (number[i])
		i++;
	number[i] = base[-r];
}

char	*to_dec(int nbr, char *base_to, int base_to_s)
{
	char	*number;
	char	*number_clean;
	int		i;

	number = (char *)malloc(sizeof(char) * 34);
	if (number == NULL)
		return (NULL);
	i = -1;
	while (++i < 34)
		number[i] = '\0';
	if (nbr < 0)
		number[0] = '-';
	iterate(nbr, base_to, base_to_s, number);
	i = 0;
	while (number[i])
		i++;
	number_clean = (char *)malloc(sizeof(char) * i + 1);
	if (number_clean == NULL)
		return (NULL);
	i = -1;
	while (number[++i])
		number_clean[i] = number[i];
	number_clean[i] = '\0';
	free(number);
	return (number_clean);
}

int	get_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
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

int	check_nbr(char *str, int i, char *base)
{
	int	j;
	int	k;
	int	match;

	k = 0;
	while (str[i + k])
	{
		match = 0;
		j = 0;
		while (!match && base[j])
		{
			if (str[i + k] == base[j])
				match = 1;
			j++;
		}
		if (!match)
			return (0);
		k++;
	}
	return (k);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		s;
	int		base_to_s;
	int		nbr_s;
	int		i;
	char	*nbr_c;

	base_to_s = get_base_size(base_to);
	i = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		(void)i++;
	s = 1;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			s = -s;
		(void)i++;
	}
	if (get_base_size(base_from) < 2 || base_to_s < 2)
		return (NULL);
	nbr_c = clean(nbr, base_from, &nbr_s, i);
	if (nbr_c == NULL)
		return (NULL);
	return (to_dec(to_n(nbr_c, base_from, 0, nbr_s) * s, base_to, base_to_s));
}
