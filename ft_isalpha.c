/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:03:55 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/26 16:27:35 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int b)
{
	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
		return (b);
	return (0);
}
