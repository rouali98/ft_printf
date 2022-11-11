/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:16:12 by rouali            #+#    #+#             */
/*   Updated: 2022/10/29 13:18:00 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_mx(unsigned long nbr)
{
	int		len;
	char	*str;

	str = "0123456789abcdef";
	len = 0;
	if (nbr >= 16)
	{
		len += ft_mx(nbr / 16);
		len += ft_mx(nbr % 16);
	}
	else
	{
		len += ft_putchar(str[nbr]);
	}
	return (len);
}
