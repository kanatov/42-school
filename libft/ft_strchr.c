/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:02:29 by ikanatov          #+#    #+#             */
/*   Updated: 2024/04/15 11:02:30 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *)s;
	while (*ptr_s)
	{
		if (*ptr_s == (char)c)
			break ;
		ptr_s++;
	}
	if (*ptr_s == (char)c)
		return (ptr_s);
	return ((void *)0);
}
