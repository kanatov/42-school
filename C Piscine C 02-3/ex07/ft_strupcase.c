/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:46:51 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/12 17:46:55 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_lowcase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
