/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:03:53 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/14 18:48:32 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (i + j < len)
			&& (haystack[i + j] != '\0'))
		{
			if (j == ft_strlen(needle) - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
