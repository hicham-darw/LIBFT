/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_check_overflow(int res, char c, int sign);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	if (str == NULL)
		return (0);
	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || sttr[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		if (ft_check_overflow(result, str[i + 1], sign) != 0 && !(str + i + 1))
			return (ft_check_overflow(result, str[i + 1], sign) * sign);
		i++;
	}
	return (result * sign);
}
