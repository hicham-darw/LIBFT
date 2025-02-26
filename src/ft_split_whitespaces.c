/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_fill_vector_str(char **vector, char *str);
int	ft_count_words(char *str);
//----------prototype-----------------------

char	**ft_split_whitespaces(char *str)
{
	char	**vec;
	int	len_v;

	len_v = ft_count_words(str);
	vec = (char **)malloc(sizeof(char *) * len_v + 1);
	if (!vec)
		return (NULL);
	return (ft_fill_vector_str(vec, str));
}
