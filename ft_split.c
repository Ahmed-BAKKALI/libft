/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:00:19 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/26 16:38:39 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	*len_words(char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	*len;

	len = malloc(countwords(str, c) * sizeof(size_t));
	if (!len)
		return (0);
	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i + 1] != '\0')
			i++;
		count++;
		if ((str[i + 1] == '\0' || str[i + 1] == c) && str[i] != c)
		{
			len[j] = count;
			j++;
			count = 0;
		}
		i++;
	}
	return (len);
}

static int	ft_free(char **d, char *s, char c)
{
	size_t	i;
	size_t	*len;

	i = 0;
	len = len_words(s, c);
	if (!len)
		return (0);
	while (i < countwords(s, c))
	{
		d[i] = ft_calloc(len[i] + 1, sizeof(char));
		if (!d[i])
		{
			free(len);
			while (i > 0)
				free(d[--i]);
			return (0);
		}
		i++;
	}
	free(len);
	return (1);
}

static char	**ft_copy(char **d, char *s, char c, size_t i)
{
	size_t	k;
	size_t	j;
	int		sep;

	k = 0;
	j = i;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c && (*(s + i + 1) == c || *(s + i + 1) == '\0'))
		{
			ft_strlcpy(d[k], s + j, i - j + 2);
			while (s[i + 1] == c && s[i + 1] != '\0')
			{
				i++;
				sep = 1;
			}
			if (sep == 1)
				j = i + 1;
			if (*(s + i + 1))
				k++;
		}
		sep = 0;
		i++;
	}
	return (d);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**d;

	if (!s)
		return (0);
	d = ft_calloc(countwords((char *)s, c) + 1, sizeof(char *));
	if (!d)
		return (0);
	if (ft_free(d, (char *)s, c) == 0)
	{
		free(d);
		return (NULL);
	}
	i = 0;
	while (s[i] == c && c != '\0')
		i++;
	d = ft_copy(d, (char *)s, c, i);
	return (d);
}
