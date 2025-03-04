/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_count_len(char *str, char c);
char	**ft_fill_vec(char **vec, char *s, char c, size_t len);

char	**ft_strsplit(char const *s, char c)
{
	char	**vector;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_count_len((char *)s, c);
	vector = (char **)malloc(sizeof(char *) * (len + 1));
	if (!vector)
		return (NULL);
	ft_fill_vec(vector, (char *)s, c, len);
	return (vector);
}

size_t	ft_count_len(char *str, char c)
{
	size_t	i;
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i])
				i++;
			count++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

char	**ft_fill_vec(char **vector, char *str, char c, size_t len)
{
	size_t	ptr_count;
	size_t	i;
	size_t	start;

	if (!vector || !str)
		return (NULL);
	ptr_count = 0;
	i = 0;
	while (str[i] && ptr_count < len)
	{
		if (str[i] != c)
		{
			start = i;
			while (str[i] != c && str[i])
				i++;
			vector[ptr_count] = ft_strnew(i - start);
			ft_strncpy(vector[ptr_count], (str + start), (i - start));
			ptr_count += 1;
		}
		else
			i++;
	}
	vector[ptr_count] = NULL;
	return (vector);
}
