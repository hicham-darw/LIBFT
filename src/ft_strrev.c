/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	ft_swap(char *a, char *b);
size_t	ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int	i;
	int	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	i = 0;
	while (i < (len / 2))
	{
		ft_swap(&str[i], &str[(len - 1) - i]);
		i++;
	}
	return (str);
}
