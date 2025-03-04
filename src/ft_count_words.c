/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *str)
{
	int	i;
	int	count;

	if (str == NULL)
		return (0);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]) == 1)
		{
			count += 1;
			while (ft_isspace(str[i]) == 1 && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}
