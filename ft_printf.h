/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:34:58 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/21 06:29:48 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
int	ft_printf(char const *str, ...);

# define DEC_DIGS "0123456789"
# define HEX_DIGS_UPPER "0123456789ABCDEF"
# define HEXA_DIGS_LOWER "0123456789abcdef"

#endif //FT_PRINTF_H
