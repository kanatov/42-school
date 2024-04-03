/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmazitov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:04:45 by zmazitov          #+#    #+#             */
/*   Updated: 2024/03/24 18:04:49 by zmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "main.h"

void	free_dict(t_number *dict, int lines_n)
{
	int	i;

	i = 0;
	if (!dict)
		return ;
	while (dict[i].key && i < lines_n)
	{
		free(dict[i].key);
		i++;
	}
	i = 0;
	while (dict[i].value && i < lines_n)
	{
		free(dict[i].value);
		i++;
	}
	free(dict);
}
