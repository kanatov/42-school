/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:37:15 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/21 10:37:20 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ({int result; \
if (Value < 0) \
{\
result = -Value; \
} \
 else { \
result = Value; \
}\
result;})
#endif