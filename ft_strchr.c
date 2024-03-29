/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:16:50 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/26 17:12:09 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int b)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)b)
			return ((char *)(s + i));
		i++;
	}
	if ((char)b == '\0')
		return ((char *)(s + i));
	return (0);
}
