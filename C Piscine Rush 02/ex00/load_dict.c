/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmazitov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:17:47 by zmazitov          #+#    #+#             */
/*   Updated: 2024/03/24 18:19:20 by zmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int	max_line_length(char *dict_name)
{
	int		max_length;
	int		current_length;
	char	c;
	int		fd;

	max_length = 0;
	current_length = 0;
	fd = open(dict_name, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, &c, sizeof(char)))
	{
		current_length++;
		if (c == '\n')
		{
			if (current_length > max_length)
				max_length = current_length;
			current_length = 0;
		}
	}
	close(fd);
	return (max_length);
}

int	read_key(t_number *dict, int lines_s, int fd, int i)
{
	char	c;
	int		j;

	dict[i].key = (char *)malloc(lines_s * sizeof(char));
	if (!dict[i].key)
		return (1);
	j = 0;
	while (read(fd, &c, sizeof(char)))
	{
		if (c == ':')
		{
			dict[i].key[j] = '\0';
			break ;
		}
		if (c >= '0' && c <= '9')
			dict[i].key[j] = c;
		j++;
	}
	return (0);
}

int	read_value(t_number *dict, int lines_s, int fd, int i)
{
	char	c;
	int		j;

	dict[i].value = (char *)malloc(lines_s * sizeof(char));
	if (!dict[i].value)
		return (1);
	j = 0;
	while (read(fd, &c, sizeof(char)))
	{
		if (c == '\n')
		{
			dict[i].value[j] = '\0';
			return (0);
		}
		if (c >= 32 && c <= 126)
		{
			dict[i].value[j] = c;
			j++;
		}
	}
	return (0);
}

t_number	*create_dict(int lines_n, int lines_s, int fd)
{
	t_number	*dict;
	int			i;

	dict = (t_number *)malloc(lines_n * sizeof(t_number));
	if (dict == NULL)
	{
		write(1, "Data allocation error\n", 6);
		return (NULL);
	}
	i = 0;
	while (i < lines_n)
	{
		if (read_key(dict, lines_s, fd, i))
			write(1, "Data allocation error\n", 6);
		if (read_value(dict, lines_s, fd, i))
			write(1, "Data allocation error\n", 6);
		i++;
	}
	return (dict);
}

t_number	*load_dict(char *dict_name)
{
	int			fd;
	int			lines_n;
	int			lines_s;
	t_number	*dict;

	fd = open(dict_name, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict error\n", 6);
		return (NULL);
	}
	lines_n = count_lines(dict_name);
	lines_s = max_line_length(dict_name);
	dict = create_dict(lines_n, lines_s, fd);
	close(fd);
	return (dict);
}
