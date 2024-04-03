/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmazitov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:14:35 by zmazitov          #+#    #+#             */
/*   Updated: 2024/03/24 18:14:40 by zmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int	count_lines(char *dict_name)
{
	int		lines;
	char	c;
	int		fd;

	lines = 0;
	fd = open(dict_name, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, &c, sizeof(char)))
	{
		if (c == '\n')
			lines++;
	}
	close(fd);
	return (lines);
}
