/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:37 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/24 15:56:34 by zmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_number
{
	char	*key;
	char	*value;
}	t_number;

t_number	*load_dict(char *dict_name);
char		**get_words(t_number **dict);
char		**breakdown_nbr(char *number);
char		**cross_match(char **input_arr, t_number *dict);
void		free_dict(t_number *dict, int lines_n);
int			count_lines(char *dict_name);
#endif
