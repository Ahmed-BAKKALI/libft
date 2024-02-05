/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:59:23 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/16 18:07:34 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	char	*str1;
	char	*str2;
	char	*d;

	if (!s1 || !s2)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	j = 0;
	d = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!d)
		return (0);
	while (*str1)
		*(d++) = *(str1++);
	while (str2[j])
	{
		d[j] = str2[j];
		j++;
	}
	d[j] = '\0';
	return (d - ft_strlen(s1));
}
