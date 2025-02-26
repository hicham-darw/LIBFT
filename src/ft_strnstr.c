/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	char	*ptr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	cmp;

	if (!to_find)
		return (str);
	if (!str)
		return (NULL);
	i = 0;
	while (i < n && str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp((str + i), to_find, ft_strlen(to_find)) == 0)
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
