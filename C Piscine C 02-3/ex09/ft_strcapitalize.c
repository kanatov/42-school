/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:00:10 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/12 19:00:13 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_word(char c)
{
	return (is_numeric(c) || is_lowcase(c) || is_upcase(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i])
	{
		if (is_word(str[i]))
		{
			if (is_upcase(str[i]))
				str[i] += 32;
			if (cap && is_lowcase(str[i]))
				str[i] -= 32;
			cap = 0;
		}
		else
		{
			cap = 1;
		}
		i++;
	}
	return (str);
}
