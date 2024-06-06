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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	write_to_cache(char **cache_ptr, int fd)
{
	int r_byte;
	int c_len;
	char *new_cache;
	int i;

	c_len = 0;
	if (*cache_ptr)
		c_len = ft_strlen(*cache_ptr);
	new_cache = malloc(sizeof(char) * (c_len + BUFFER_SIZE + 1));
	i = 0;
	while (i < c_len)
	{
		new_cache[i] = (*cache_ptr)[i];
		i++;
	}
	r_byte = read(fd, new_cache + i, BUFFER_SIZE);
	new_cache[c_len + r_byte] = '\0';

	if (r_byte)
	{
		free(*cache_ptr);
		*cache_ptr = new_cache;
		return (1);
	}
	return (0);
}

char	*read_from_cache(char **cache_ptr)
{
	char *line;

	(void)cache_ptr;
	line = NULL;
	return line;
}

char	*get_next_line(int fd)
{
	static char	*cache = NULL;
	char		*line;
	int			isWritten;

	while(1)
	{
		isWritten = 0;
		line = NULL;
		// 1. Check new lines in cache
		if (cache)
			line = read_from_cache(&cache);

		// 2. Return new line, keep the rest in cache
		if (line)
			return (line);

		// 3. Read new buffer to cache
		// 4. Nothing to read
		isWritten = write_to_cache(&cache, fd);
		if (!isWritten && !cache)
			return NULL;
		if (!isWritten && cache)
		{
			line = cache;
			cache = NULL;
			return line;
		}
	}
}


