/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:18:33 by rouali            #+#    #+#             */
/*   Updated: 2022/10/29 13:18:35 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_lx(unsigned long nbr)
{
	int		len;
	char	*str;

	str = "0123456789ABCDEF";
	len = 0;
	if (nbr >= 16)
	{
		len += ft_lx(nbr / 16);
		len += ft_lx(nbr % 16);
	}
	else
	{
		len += ft_putchar(str[nbr]);
	}
	return (len);
}
