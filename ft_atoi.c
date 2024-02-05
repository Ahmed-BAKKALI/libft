/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:59:32 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/01/26 19:55:38 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	skipspace(const char *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long int	res;
	long long int	before;

	i = 0;
	sign = 1;
	res = 0;
	i = skipspace(str, i);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		before = res;
		res = res * 10 + str[i++] - '0';
		if (res / 10 != before && sign == 1)
			return (-1);
		else if (res / 10 != before && sign == -1)
			return (0);
	}
	return (res * sign);
}
