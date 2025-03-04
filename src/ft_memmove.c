/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	i;

	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	if (&tmp_src < &tmp_dest)
		ft_strncpy(tmp_dest, tmp_src, n);
	else
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			tmp_dest[i] = tmp_src[i];
			i--;
		}
	}
	return (dest);
}
