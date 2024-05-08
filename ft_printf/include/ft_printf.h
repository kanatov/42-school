/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:06:56 by ikanatov          #+#    #+#             */
/*   Updated: 2024/05/07 14:06:58 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <stdio.h> // DELETE THAT

int	ft_printf(const char *str, ...);
typedef size_t (*t_functions_dispatch)(va_list *ap);
size_t ft_printf_d (va_list *args);
size_t ft_printf_s (va_list *args);
#endif
