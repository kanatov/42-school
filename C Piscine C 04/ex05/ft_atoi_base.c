/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:13:31 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/15 12:13:33 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	get_value(char *str, char *base, int depth, int str_size)
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
			if (*str == base[i])
				match = 1;
			j++;
		}
		i++;
	}
	p = get_pow(i, str_size - depth - 2);
	j--;
	str++;
	depth++;
	if (str_size - depth)
		j = j * p + get_value(str, base, depth, str_size);
	return (j);
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
	return (--i);
}

int	get_str_size(char *str, char *base)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	while (str[i])
	{
		match = 0;
		j = 0;
		while (!match && base[j])
		{
			if (str[i] == base[j])
				match = 1;
			j++;
		}
		if (!match)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	value;
	int	base_size;
	int	str_size;

	i = 0;
	s = 1;
	value = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	base_size = get_base_size(base);
	str += i;
	str_size = 0;
	if (base_size)
		str_size = get_str_size(str, base);
	if (str_size)
		value = get_value(str, base, 0, str_size) * s;
	return (value);
}
