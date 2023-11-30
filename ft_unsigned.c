/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 05:45:54 by asodor            #+#    #+#             */
/*   Updated: 2023/11/28 21:19:21 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_unsigned(unsigned int n)
{
	int	count;

	count = ft_len(n);
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_unsigned(n / 10);
		ft_unsigned(n % 10);
	}
	return (count);
}
