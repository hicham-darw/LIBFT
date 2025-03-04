/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	size_t	i;
	size_t	len;
	size_t	start;
	size_t	last;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	i = 0;
	while (ft_isspace(s[i]) == 1 && s[i])
		i++;
	start = i;
	last = 0;
	while (ft_isspace(s[len - 1]) == 1 && (int)(len - 1) >= 0)
	{
		last++;
		len--;
	}
	len = ft_strlen((char *)s) - (start + last);
	ptr = ft_strnew(len);
	if (!ptr)
		return (NULL);
	ft_strncpy(ptr, (char *)(s + start), len);
	return (ptr);
}
