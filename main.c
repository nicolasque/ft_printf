/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:38:04 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/27 15:45:21 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	const char *str = "hola mundo";
	// char c = 'z';
	// char *str2 = "que tal";
	// int int_printf_mio = ft_printf("%p", str);
	// int int_prinf_original = printf("%p", str);
	printf("%i\n", ft_printf("\001\002\007\v\010\f\r\n"));
	printf("%i", printf("\001\002\007\v\010\f\r\n"));

	return (0);
}
