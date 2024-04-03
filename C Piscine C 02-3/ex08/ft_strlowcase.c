/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:46:34 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/12 18:46:36 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_upcase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
