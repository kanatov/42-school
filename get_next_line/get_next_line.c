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

int	ft_strlen(char *str)
{
	char	*str_l;

	if (!str)
		return (0);
	str_l = str;
	while (*str_l)
		str_l++;
	return (str_l - str);
}

char *read_doc(int fd, char **cache_ptr)
{
	char	*line;
	int		r_byte;
	int		cache_length;
	int		i_line;
	int		i_buffer;
	int		nl_flag;
	int		i_cache;

	// Get new buffer
	while (1)
	{
		// Copy cache leftowers to a new line + place for buffer
		cache_length = ft_strlen(*cache_ptr);

		line = malloc(sizeof(char) * (cache_length + BUFFER_SIZE + 1));
		if (!line)
			return NULL;
		i_line = 0;
		while (*cache_ptr && (*cache_ptr)[i_line])
		{
			line[i_line] = (*cache_ptr)[i_line];
			i_line++;
		}

		// Read to the end of line
		r_byte = read(fd, line+i_line, BUFFER_SIZE);
		if (r_byte < 1)
			return (*cache_ptr);
		line[r_byte + i_line] = '\0';
		i_buffer = 0;

		// Check if the added part has new line
		free(*cache_ptr);
		*cache_ptr = malloc(sizeof(char) * (BUFFER_SIZE+1));
		*cache_ptr[0] = '\0';
		nl_flag = 0;
		i_cache = 0;
		while (line[i_line + i_cache])
		{
			if (line[i_line] == '\n' && !nl_flag)
			{
				nl_flag = 1;
				i_line++;
			}
			if (nl_flag)
			{
				(*cache_ptr)[i_cache] = line[i_line + i_cache];
				line[i_line + i_cache] = '\0';
				i_cache++;
			}
			else
				i_line++;
		}
		(*cache_ptr)[i_cache] = '\0';
		if (nl_flag)
			return (line);
		*cache_ptr = line;
	}
}

char	*get_next_line(int fd)
{
	static char	*cache = NULL;

	if (fd == -1 || !BUFFER_SIZE)
		return (NULL);
	
	return (read_doc(fd, &cache));
}
