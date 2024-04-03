/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:36 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/12 15:18:38 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (!is_lowcase(*str))
			i = 0;
		str++;
	}
	return (i);
}
