/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:06:40 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/24 20:22:19 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hex(unsigned int n)
{
	char	v;
	unsigned long	nb;
	int		print;
	char	*base;

	print = 0;
	nb = n;
	base = malloc(sizeof(char) * (17));
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		print += ft_hex((nb / 16));
	}
	v = (nb % 16) + '0';
	return (print + write(1, &v, sizeof(v)));
}

int	ft_hex(unsigned int n)
{
	char	v;
	unsigned long	nb;
	int		print;
	char	*base;

	print = 0;
	nb = n;
	base = malloc(sizeof(char) * (17));
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		print += ft_hex((nb / 16));
	}
	v = (nb % 16) + '0';
	return (print + write(1, &v, sizeof(v)));
}
