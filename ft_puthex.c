/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:36:32 by asodor            #+#    #+#             */
/*   Updated: 2023/11/29 03:30:21 by asodor           ###   ########.fr       */
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

int	ft_puthex(unsigned int n, char format)
{
	int		i;
	char	*base;
	char	arr[16];

	i = 0;
	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (n == 0)
		arr[i++] = '0';
	while (n)
	{
		arr[i++] = base[n % 16];
		n /= 16;
	}
	arr[i] = '\0';
	ft_rev(arr);
	return (ft_strlen(arr));
}
