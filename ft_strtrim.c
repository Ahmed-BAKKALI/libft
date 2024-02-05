/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:41:11 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/16 17:56:32 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	firstskip(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] && j < ft_strlen(set))
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	backspace(char const *s1, char const *set, size_t i)
{
	size_t	j;

	j = 0;
	while (s1[i] && j < ft_strlen(set))
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*d;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	k = firstskip(s1, set);
	i = ft_strlen(s1) - 1;
	j = 0;
	if (k > i)
		return (ft_strdup(""));
	i = backspace(s1, set, i);
	d = malloc(i - k + 2);
	j = 0;
	if (!d)
		return (0);
	while (k <= i)
		d[j++] = s1[k++];
	d[j] = '\0';
	return (d);
}
