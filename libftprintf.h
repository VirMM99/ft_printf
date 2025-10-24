/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:24:53 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/24 20:20:49 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

				//Inclusiones necesarias
# include <stdlib.h> //MALLOC
# include <unistd.h> //Write
# include <string.h> //SIZE_T
# include <limits.h> //INT_MIN
# include <stdio.h> //No se entrega
# include <ctype.h> //No se entrega
# include <bsd/string.h> //No se entrega
# include <aio.h> //SIZE_T tmb...

								// Declaracion de funciones (Obligatorias)
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr_fd(int n);
int	ft_uputnbr_fd(unsigned int n); //(????)
int	ft_hex(unsigned int n);




# define HEX
# define HEX

#endif