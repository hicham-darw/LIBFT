/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	total_len;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	total_len = (unsigned)ft_strlen(dest) + ft_strlen(src);
	if ((len_dest + 1) >= size)
		return (total_len);
	else
	{
		i = 0;
		while (src[i] && (len_dest + i) < (size - 1))
		{
			dest[i + len_dest] = src[i];
			i++;
		}
		dest[i + len_dest] = '\0';
		return (i + len_dest);
	}
}
