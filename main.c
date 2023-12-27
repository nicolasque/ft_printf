/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:38:04 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/27 14:52:03 by nquecedo         ###   ########.fr       */
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
	printf("%i\n", ft_printf("Imprime mio: %p\n" , ""));
	printf("%i", printf("Imprime ORI: %p\n", ""));

	return (0);
}
