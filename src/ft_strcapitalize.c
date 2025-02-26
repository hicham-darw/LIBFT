/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	ft_capital_char(char j, char *i);

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	j;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		else
		{
			j = i - 1;
			ft_capital_char(str[j], &str[i]);
		}
		i++;
	}
	return (str);
}
