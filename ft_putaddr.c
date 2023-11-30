/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:34:02 by asodor            #+#    #+#             */
/*   Updated: 2023/11/29 04:37:19 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_rev(char *arr)
{
	int	i;

	i = ft_strlen(arr) - 1;
	while (i >= 0)
		write(1, &arr[i--], 1);
}

int	ft_putaddr(unsigned long n)
{
	int		i;
	int		count;
	char	*base;
	char	arr[32];

	i = 0;
	count = 0;
	base = "0123456789abcdef";
	if (n == 0)
		return (ft_putstr("0x0"));
	while (n)
	{
		arr[i++] = base[n % 16];
		n /= 16;
	}
	arr[i] = '\0';
	count = ft_putstr("0x") + ft_strlen(arr);
	ft_rev(arr);
	return (count);
}
