/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:51:53 by asodor            #+#    #+#             */
/*   Updated: 2023/11/29 03:29:24 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_putaddr(va_arg(args, unsigned long));
	else if ((format == 'd') || (format == 'i'))
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if ((format == 'x') || (format == 'X'))
		len += ft_puthex(va_arg(args, unsigned int), format);
	else
		len += ft_putchar(format);
	return (len);
}
