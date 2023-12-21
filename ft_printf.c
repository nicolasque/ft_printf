/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:57:26 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/21 04:56:05 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>


void	ft_print_str(const char *str)
{
	int len;
	
	while (str[len])
		len++;
	if (!str)
		write(1, "(null)", 6);
	else
		write(1, str, len);
}

void	ft_print_num_base(char *base, long nbr)
{
	int base_len;
	
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < base_len)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
			ft_print_num_base(base, nbr / base_len);
			write(1, &base[nbr % base_len], 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_detect_converters(const char *str, va_list args)
{
	if (*str == '%')
	{
		if (*(str + 1) == 'c')
			ft_putchar(va_arg(args, int));
		else if (*(str + 1) == 's')
			ft_print_str(va_arg(args, const char *));
		else if (*(str + 1) == 'p')
			ft_print_num_base(HEXA_DIGS_LOWER, (long)va_arg(args, void *));
		else if (*(str + 1) == 'd')
			ft_print_num_base(DEC_DIGS, va_arg(args, int));
		else if (*(str + 1) == 'i')
			ft_print_num_base(DEC_DIGS, va_arg(args, int));
		else if (*(str + 1) == 'u')
			ft_print_num_base(DEC_DIGS, va_arg(args, unsigned long));
		else if (*(str + 1) == 'x')
			ft_print_num_base(HEXA_DIGS_LOWER, va_arg(args, int));
		else if (*(str + 1) == 'X')
			ft_print_num_base(HEX_DIGS_UPPER, va_arg(args, int));
		else if (*(str + 1) == '%')
			ft_putchar('%');
		return (1);
	}
	else
		ft_putchar(*str);
	return (0);
}
int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str)
	{
		if (ft_detect_converters(str, args))
			str ++;
		str ++;
	}
	va_end(args);
	return (0);
}

int main()
{
	const char *str = "hola mundo";
	char c = 'c';
	char *str2 = "que tal";
	ft_printf("Imprime mio: %u\n", -65);
	printf("Imprime ORIGINAL: %u\n", -65);
	return (0);
}