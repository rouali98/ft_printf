/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:52:08 by rouali            #+#    #+#             */
/*   Updated: 2022/10/29 12:52:11 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check(char c, va_list list)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_pointer(va_arg(list, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'u')
		return (ft_unsigned(va_arg(list, unsigned int)));
	else if (c == 'x')
		return (ft_mx(va_arg(list, unsigned int)));
	else if (c == 'X')
		return (ft_lx(va_arg(list, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}
