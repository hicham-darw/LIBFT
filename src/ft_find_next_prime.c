/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 0)
		return (-1);
	if (nb == 0 || nb == 1 || nb == 2)
		return (2);
	while (i < nb)
	{
		if ((nb % i) != 0)
			i++;
		else
		{
			i = 2;
			nb = nb + 1;
		}
	}
	return (nb);
}
