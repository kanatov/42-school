/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_2_x_4_2_x_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimacdou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:48:04 by mimacdou          #+#    #+#             */
/*   Updated: 2024/03/17 18:48:06 by mimacdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	method_2_x_4_2_x_3(int *arr)
{
	if (arr[0] == 2 && arr[2] == 4 && arr[3] == 2 && arr[5] == 0)
	{
		arr[1] = 3;
		arr[4] = 1;
	}
	if (arr[0] == 3 && arr[2] == 2 && arr[3] == 4 && arr[5] == 2)
	{
		arr[4] = 3;
		arr[1] = 1;
	}
}
