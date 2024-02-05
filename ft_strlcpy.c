/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:14:37 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/14 18:46:28 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (s[i] && i < dstsize - 1)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (ft_strlen(src));
}
