/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:08:14 by rouali            #+#    #+#             */
/*   Updated: 2022/10/29 12:08:17 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		c;
	va_list	list;

	i = 0;
	c = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			c += ft_putchar(str[i]);
		}
		else if (str[i] == '%')
		{
			c += ft_check(str[i + 1], list);
			i++;
		}
		i++;
	}
	return (c);
}

//int main()
//{

//	return (0);
//}
