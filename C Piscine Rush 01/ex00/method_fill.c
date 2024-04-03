/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimacdou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:18:49 by mimacdou          #+#    #+#             */
/*   Updated: 2024/03/17 16:18:51 by mimacdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	method_fill(int *arr)
{
	int	i;
	int	spaces;
	int	loc;
	int	sum;

	spaces = 0;
	loc = 0;
	sum = 0;
	i = 1;
	while (i < 5)
	{
		if (arr[i] == 0)
		{
			loc = i;
			spaces++;
		}
		sum += arr[i];
		i++;
	}
	if (spaces == 1)
		arr[loc] = 10 - sum;
}
