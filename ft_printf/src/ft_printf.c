/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:36:13 by ikanatov          #+#    #+#             */
/*   Updated: 2024/05/07 11:36:15 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_c(va_list	*ptr_args)
{
	ft_putchar_fd(va_arg(*ptr_args, int), 1);
	return (1);
}

size_t	ft_printf_s(va_list	*ptr_args)
{
	char	*str;

	str = va_arg(*ptr_args, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

size_t	ft_printf_p(va_list	*ptr_args)
{
	char buffer[16];
	char *str;
	unsigned long int address;
	int i;

	// buffer[0] = '0';
	// buffer[1] = 'x';
	buffer[15] = '\0';
	address = (unsigned long int)va_arg(*ptr_args, void *);
	i = 14;
	while (address) {
		buffer[i] = "0123456789abcdef"[address % 16];
		address /= 16;
		i--;
	}
	i++;
	str = ft_substr(buffer,i,15-i);
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}

size_t	ft_printf_d(va_list	*ptr_args)
{
	char	*str;

	str = ft_itoa(va_arg(*ptr_args, int));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

size_t	ft_printf_percent(va_list	*ptr_args)
{
	(void )*ptr_args;
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;
	int		i;

	if (!format || !*format)
		return (0);
	va_start(args, format);
	t_functions_dispatch const dispatch[] = {
		['c'] = ft_printf_c,
		['s'] = ft_printf_s,
		['p'] = ft_printf_p,
		['d'] = ft_printf_d,
		['%'] = ft_printf_percent,
	};
	count = 0;
	i = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (dispatch[(unsigned char)(format[i])])
			{
				count += dispatch[(unsigned char)(format[i])](&args);
				i++;
			}
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}

// %i Prints an integer in base 10.
// %u Prints an unsigned decimal (base 10) number.
// %x Prints a number in hexadecimal (base 16) lowercase format.
// %X Prints a number in hexadecimal (base 16) uppercase format.