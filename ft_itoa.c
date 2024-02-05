/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:24:57 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/19 20:44:33 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_i(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_allc(size_t i, int n)
{
	char	*d;

	i = ft_i(n);
	d = malloc(i + 1);
	if (!d)
		return (0);
	return (d);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*d;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_i(n);
	d = ft_allc(i, n);
	if (!d)
		return (0);
	d[i] = '\0';
	i--;
	if (n == 0)
		d[0] = '0';
	if (n < 0)
	{
		d[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		d[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (d);
}
