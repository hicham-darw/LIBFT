/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_vector_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char *str);

char	**ft_fill_vector_str(char **vec, char *str)
{
	int	count_s;
	int	ptr_count;
	int	i;

	ptr_count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]) == 0)
		{
			count_s = ft_count_word(str + i);
			vec[ptr_count] = (char *)malloc(sizeof(char) * count_s + 1);
			if (!vec[ptr_count])
				return (NULL);
			ft_strncpy(vec[ptr_count], (str + i), count_s);
			ptr_count++;
			i += count_s;
		}
		else
			i++;
	}
	vec[ptr_count] = NULL;
	return (vec);
}

int	ft_count_word(char *str)
{
	int	i;
	int	len;

	if (!str)
		return (0);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]) == 0)
		{
			len++;
			i++;
		}
		else
		{
			break ;
		}
	}
	return (len);
}
