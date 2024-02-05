/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:38:23 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/26 16:42:06 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	if (!s)
		return (0);
	i = 0;
	if (*s == '\0' || len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	d = malloc(len + 1);
	if (!d)
		return (0);
	while (len--)
	{
		*(d + i) = *(s + start + i);
		i++;
	}
	d[i] = '\0';
	return (d);
}
