/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:15:21 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/17 23:15:23 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	push(char *str, char ***words_ptr)
{
	int		i;
	char	**new_words;

	i = 0;
	while ((*words_ptr)[i])
		i++;
	new_words = malloc(sizeof(char *) * (i + 2));
	if (new_words == NULL)
		*words_ptr = NULL;
	ft_memcpy(new_words, *words_ptr, sizeof(char *) * i);
	new_words[i + 1] = NULL;
	new_words[i] = str;
	free(*words_ptr);
	if (new_words[i])
		*words_ptr = new_words;
	else
		*words_ptr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;
	char	*ptr_c;
	char	*substr;

	words = malloc(sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[0] = NULL;
	i = 0;
	while (s[i])
	{
		ptr_c = ft_strchr((s + i), c);
		if(ptr_c)
			j = ptr_c - (s + i);
		else
			j = (int)ft_strlen(s + i);
		if (j)
		{
			substr = ft_substr(s, i, j + 1);
			push(substr, &words);
			i += j;
		}
		i++;
	}
	return (words);
}
			// write(1,"i: ",3);
			// write(1, ft_itoa(i),2);
			// write(1,"j: ",3);
			// write(1, ft_itoa(j),2);
			// write(1,"j: ",3);
			// write(1, ft_itoa(j),2);
			// write(1,"\n",1);
