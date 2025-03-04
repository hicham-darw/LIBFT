/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!str)
		return (NULL);
	else if (!to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp((str + i), to_find, ft_strlen(to_find)) == 0)
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
