/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:34:58 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/26 18:20:42 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);

# define DEC_DIGS "0123456789"
# define HEX_UP "0123456789ABCDEF"
# define HEXA_LO "0123456789abcdef"

#endif //FT_PRINTF_H
