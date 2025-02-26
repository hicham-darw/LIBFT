/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_integer_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_int(int *x, int *y);

void	ft_rev_integer_table(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		while (j < (size - 1))
		{
			if (tab[i] < tab[j])
				ft_swap_int(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
