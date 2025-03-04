/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	size_t	i;
	char	sign;

	len = ft_nbrlen(n);
	ptr = ft_strnew(len);
	if (!ptr)
		return (NULL);
	sign = '\0';
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	i = 0;
	while (i < (len) && n >= 10)
	{
		ptr[i] = (n % 10) + 48;
		i++;
		n /= 10;
	}
	ptr[i] = n + 48;
	ptr[i + 1] = sign;
	return (ft_strrev(ptr));
}
