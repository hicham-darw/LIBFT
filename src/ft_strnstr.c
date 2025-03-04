/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int	i;

	if (!to_find)
		return (str);
	if (!str)
		return (NULL);
	i = 0;
	while (i < n && str[i])
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
