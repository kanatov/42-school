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

	if (!s)
		return (0);
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

	c_len = ft_strlen(*cache_ptr);
	new_cache = malloc(sizeof(char) * (c_len + BUFFER_SIZE + 1));
	i = 0;
	while (c_len && (*cache_ptr)[i])
	{
		new_cache[i] = (*cache_ptr)[i];
		i++;
	}
	r_byte = read(fd, new_cache + i, BUFFER_SIZE);
	new_cache[c_len + r_byte] = '\0';
	if (!r_byte && c_len)
	{
		free(new_cache);
		new_cache = NULL;
	}

	if (r_byte)
	{
		free(*cache_ptr);
		*cache_ptr = new_cache;
		return (1);
	}
	free(new_cache);
	
	return (0);
}

char	*read_from_cache(char **cache_ptr)
{
	char	*new_cache;
	char	*tmp;
	int		c_len;
	int		i;
	int		j;
	int		nl;

	c_len = 0;
	if (!c_len)
		return (NULL);
	new_cache = malloc(sizeof(char) * (BUFFER_SIZE+1));
	i = 0;
	if (c_len > BUFFER_SIZE)
		i = c_len - BUFFER_SIZE;
	nl = 0;
	j = 0;
	while (i + j < c_len)
	{
		if (!nl && (*cache_ptr)[i] == '\n')
		{
			nl = 1;
			i++;
		}
		if (nl)
		{
			new_cache[j] = (*cache_ptr)[i + j];
			(*cache_ptr)[i + j] = '\0';
			j++;
		}
		else
			i++;
	}
	if (!nl)
	{
		free(new_cache);
		return NULL;
	}
	new_cache[j] = '\0';
	tmp = *cache_ptr;
	*cache_ptr = new_cache;
	new_cache = tmp;
	return new_cache;
}

char	*get_next_line(int fd)
{
	static char	*cache = NULL;
	char		*line;
	int			isWritten;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	if (cache && !*cache)
		free(cache);
	while(1)
	{
		isWritten = 0;
		line = NULL;
		if (cache)
			line = read_from_cache(&cache);
		if (line)
			return (line);
		else
			free(line);
		isWritten = write_to_cache(&cache, fd);
		if ((!isWritten && !cache) || (!isWritten && !*cache))
		{
			free(cache);
			cache = NULL;
			return NULL;
		}
		if (!isWritten && cache)
		{
			line = cache;
			cache = NULL;
			return line;
		}
	}
}
// 1. Check new lines in cache
// 2. Return new line, keep the rest in cache
// 3. Read new buffer to cache
// 4. Nothing to read

// 0 read		(0)
// no cache		!cache
// return		null

// 0 read		(0)
// has cache	cache
// return		cache

// 1 read		(1)
// continue


