/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:24:53 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/28 11:43:41 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

				//Inclusiones necesarias
# include <stdarg.h> //va_...
# include <stdlib.h> //MALLOC
# include <unistd.h> //Write
# include <string.h> //SIZE_T
# include <limits.h> //INT_MIN
# include <stdio.h> //No se entrega
# include <ctype.h> //No se entrega
# include <bsd/string.h> //No se entrega
# include <aio.h> //SIZE_T tmb...

								// Declaracion de funciones
int	ft_hex(unsigned int n);
int	ft_upperhex(unsigned int n);
int	ft_printf(char const * format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_uputnbr(unsigned int n);
int	ft_putptr(unsigned long n);
int	ft_putstr(char *s);




# define HEX
# define HEX

#endif