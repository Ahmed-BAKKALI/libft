/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:51:08 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/18 19:05:27 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*d;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	d = malloc(ft_strlen(s) + 1);
	if (!d)
		return (0);
	while (s[i])
	{
		d[i] = f (i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
