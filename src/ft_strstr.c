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
#include <stddef.h>

size_t	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	sub_s;

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
