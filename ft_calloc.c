/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:12:06 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/27 17:49:15 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*dst;

	if (size != 0 && count != (count * size) / size)
		return (0);
	dst = (unsigned char *)malloc(count * size);
	if (!dst)
		return (0);
	ft_bzero(dst, count * size);
	return (dst);
}
