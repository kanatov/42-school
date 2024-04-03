/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:23:04 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/12 15:23:05 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (!is_upcase(*str))
			i = 0;
		str++;
	}
	return (i);
}
