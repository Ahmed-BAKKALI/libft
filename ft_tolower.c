/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:07:42 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/26 16:30:39 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int b)
{
	if (b >= 65 && b <= 90)
		b += 32;
	return (b);
}
