/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:57:26 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/21 00:33:39 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int ft_print_str(const char *str)
{
	printf("Printeo n str\n");
		return (0);

}

int	ft_print_hexa_memory(void *pointer)
{
	printf("printeo memoria en hexa");
		return (0);
}

void ft_print_unsigned(int i)
{
	printf("printeo un unsigned\n");
}

int	ft_print_deci(long nbr)
{
	printf("Printeo un deci");
		return (0);

}
int	ft_print_hexa_minus(int nbr)
{
	printf("printeo en hexa minuscula");
		return (0);
}
int	ft_print_hexa_mayus(int nbr)
{
	printf("printeo en hexa maysu");
		return (0);
}

void ft_print_percent()
{
	printf("Printeo %%");
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_detect_converters(const char *str)
{
	if (*str == '%')
	{
		if (*(str + 1) == 'c')
			ft_putchar('C');
		else if (*(str + 1) == 's')
			ft_print_str("printeo str");
		else if (*(str + 1) == 'p')
			ft_print_hexa_memory(NULL);
		else if (*(str + 1) == 'd')
			ft_print_deci(999);
		else if (*(str + 1) == 'i')
			ft_print_deci(888);
		else if (*(str + 1) == 'u')
			ft_print_unsigned(777);
		else if (*(str + 1) == 'x')
			ft_print_hexa_mayus(666);
		else if (*(str + 1) == 'X')
			ft_print_hexa_mayus(555);
		else if (*(str + 1) == '%')
			ft_print_percent();
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
		if (ft_detect_converters(str))
			str ++;
		str ++;
	}
	va_end(args);
	return (0);
}

int main()
{
	const char *str = "hola %s mundo";
	ft_printf(str);
	// printf("Imprime decimal: %d", 2147483647);
	return (0);
}