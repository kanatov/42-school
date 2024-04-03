/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:40:45 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/21 17:40:47 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int	check(char *str1, char *str2, int j)
{
	return (str1[j] && str1[j] == str2[j]);
}

int	main(int n, char **param)
{
	int		i;
	int		j;

	i = 2;
	while (i < n)
	{
		j = 0;
		while (check(param[i - 1], param[i], j))
			j++;
		if (param[i - 1][j] > param[i][j])
		{
			swap(&param[i - 1], &param[i]);
			i--;
			if (i < 2)
				i = 2;
		}
		else
		{
			i++;
		}
	}
	i = 0;
	while (++i < n)
		print(param[i]);
	return (0);
}
