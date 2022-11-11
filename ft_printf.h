/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:53:22 by rouali            #+#    #+#             */
/*   Updated: 2022/10/29 12:53:24 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_check(char c, va_list check);

int	ft_lx(unsigned long nbr);

int	ft_mx(unsigned long nbr);

int	ft_pointer(unsigned long p);

int	ft_printf(const char *str, ...);

int	ft_putchar(char c);

int	ft_putnbr(int nb);

int	ft_putstr(char *str);

int	ft_unsigned(unsigned int nb);

#endif
