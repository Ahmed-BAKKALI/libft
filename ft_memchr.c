/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:24:52 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/14 18:38:13 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	int				i;

	d = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (d[i] == (unsigned char)c)
			return (d + i);
		i++;
	}
	return (0);
}
