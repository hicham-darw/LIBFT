/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	char	*tmp_str1;
	char	*tmp_str2;
	size_t	i;
	int	res;

	tmp_str1 = (char *)str1;
	tmp_str2 = (char *)str2;
	i = n - 1;
	res = 0;
	while ((int)i >= 0)
	{
		res = res + tmp_str1[i] - tmp_str2[i];
		i--;
	}
	return (res);
}
