/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:23:56 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/24 15:58:00 by zmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	check_number(char *number)
{
	int	i;

	i = 0;
	if (number[0] == '0' && number[1] != '\n')
		return (i);
	while (number[i])
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
		{
			i = 0;
			break ;
		}
		i++;
	}
	return (i);
}

void	print_words(char **words)
{
	int	i;
	int	j;

	i = 0;
	while (words[i] && words[i][0])
	{
		j = 0;
		while (words[i][j])
		{
			write(1, &words[i][j], 1);
			j++;
		}
		i++;
		if (words[i] && words[i][0])
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}

void	process(char *dict_name, char *number)
{
	t_number	*dict;
	char		**words;
	int			lines_n;

	dict = load_dict(dict_name);
	words = breakdown_nbr(number);
	print_words(words);
	words = cross_match(words, dict);
	print_words(words);
	lines_n = count_lines(dict_name);
	free_dict(dict, lines_n);
	print_words(words);
	free(words);
}

int	main(int argc, char **argv)
{
	char		*number;
	char		*dict_name;

	if (argc == 2 || argc == 3)
	{
		if (argc == 2)
		{
			number = argv[1];
			dict_name = "numbers.dict";
		}
		if (argc == 3)
		{
			number = argv[2];
			dict_name = argv[1];
		}
		if (check_number(number))
			process(dict_name, number);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
