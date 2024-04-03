/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:10:53 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/26 12:10:54 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	add_string(char *str, int start, int length, char ***words_ptr)
{
	int		i;
	int		j;
	char	**new_words;

	i = 0;
	while ((*words_ptr)[i])
		i++;
	new_words = (char **)malloc(sizeof(char *) * (i + 2));
	if (new_words == NULL)
		*words_ptr = NULL;
	i = -1;
	while ((*words_ptr)[++i])
		new_words[i] = (*words_ptr)[i];
	new_words[i] = (char *)malloc(sizeof(char) * (length + 1));
	if (new_words[i] == NULL)
		*words_ptr = NULL;
	j = -1;
	while (++j < length && new_words[i] != NULL)
		new_words[i][j] = str[start + j];
	new_words[i][j] = '\0';
	new_words[i + 1] = (void *)0;
	*words_ptr = new_words;
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**words;

	words = (char **)malloc(sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[0] = (void *)0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && !is_sep(str[i + j], charset))
			j++;
		if (j)
		{
			add_string(str, i, j, &words);
			i += j;
		}
		i++;
	}
	return (words);
}
