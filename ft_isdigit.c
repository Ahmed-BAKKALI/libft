/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:03:45 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/26 16:28:06 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int b)
{
	if (b >= '0' && b <= '9')
		return (b);
	return (0);
}
