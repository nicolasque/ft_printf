/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:38:04 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/21 06:40:28 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	const char *str = "hola mundo";
	// char c = 'z';
	// char *str2 = "que tal";
	ft_printf("Imprime mio: %c |%p\n" ,'0' ,str);
	printf("Imprime ORIGINAL: %c |%p\n", '0',str);
	return (0);
}
