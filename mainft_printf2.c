/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_printf2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:27:27 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/03 11:48:31 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

// int main()
// {
// 	ft_printf("%");

// 	char *str = "hola";
// }

int	main()
{
	int	mine;
	int	orig;

	printf("test llega auqi 1\n");
	mine = ft_printf(NULL);

	printf("test llega auqi 2\n");
	orig = printf(NULL);

	printf("test llega auqi 3\n");

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf("test: %r %p\n", "a", 1);
	orig = printf("test: %r %p\n", "a", 1);

	printf("test MIO: %d testORIG: %d\n", mine, orig);

	mine = ft_printf("4: %d\n", LONG_MAX);
	orig = printf("4: %d\n", LONG_MAX);

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf("5: %i\n", 4224);
	orig = printf("5: %i\n", 4224);

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf("6: %u\n", 4224);
	orig = printf("6: %u\n", 4224);

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf("7: %x\n", 2345678);
	orig = printf("7: %x\n", 2345678);

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf("8: %X\n", 2345678);
	orig = printf("8: %X\n", 2345678);

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf("9: %%\n");
	orig = printf("9: %%\n");

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf("%%%%\n");
	orig = printf("%%%%\n");

	printf("MIO: %d ORIG: %d\n", mine, orig);

	mine = ft_printf(NULL);
	orig = printf(NULL);

	printf("MIO: %d ORIG: %d\n", mine, orig);
}