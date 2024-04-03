/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:08:07 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/07 18:08:11 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int num[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = '0' + num[i];
		write(1, &c, 1);
		i++;
	}
	write(1, ", ", 2);
}

void	check(int num[], int n)
{
	int		i;
	int		valid;
	char	c;

	valid = 1;
	i = 0;
	while (i < n)
	{
		if (i > 0)
		{
			if (num[i] <= num[i - 1])
				valid = 0;
		}
		c = '0' + num[i];
		write(1, &c, 1);
		i++;
	}
	write(1, ", ", 2);
	if (valid)
		print(num, n);
}

void	increment(int num[], int n)
{
	int	i;
	int	inc;
	int	max;

	inc = 0;
	max = 0;
	while (!max)
	{
		check(num, n);
		i = n - 1;
		while (i >= 0)
		{
			if (i + 1 < n)
			{
				if (num[i + 1] == 10)
				{
					inc = 1;
					num[i + 1] = 0;
				}
			}
			if (inc || i == n - 1)
				num[i]++;
			if (inc && num[0] == 10)
				max = 1;
			if (n == 1 && num[0] == 10)
				max = 1;
			inc = 0;
			i--;
		}
	}
}

void	ft_print_combn(int n)
{
	int		num[n];
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
	increment(num, n);
}
