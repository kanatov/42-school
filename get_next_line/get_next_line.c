/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:38:04 by ikanatov          #+#    #+#             */
/*   Updated: 2024/06/04 23:38:06 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*has_nl(char *str)
{
	int		nl_index;

	if (!str)
		return (NULL);
	nl_index = find_nl(str);
	if (nl_index < 0)
		return (NULL);
	return substring(0, nl_index, str);
}

char	*read_doc(int fd, char *str, char *buffer)
{
	char	*line;
	int		r_byte;
	char	*new_line;

	while (1)
	{
		r_byte = read(fd, buffer, BUFFER_SIZE);
		if (r_byte < 1)
			return (str);
		buffer[r_byte] = '\0';
		line = has_nl(buffer);
		if (line)
		{
			new_line = concat(str, line);
			free(str);
			// str = substring(find_nl(buffer), r_byte - find_nl(buffer), buffer);
			return (new_line);
		}
		str = concat(str, buffer);
	}
}

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	char		*line;
	char		*buffer;

	if (fd == -1 || !BUFFER_SIZE)
		return (NULL);
	line = has_nl(str);
	if (line)
		return (line);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	return (read_doc(fd, str, buffer));
}
