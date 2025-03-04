/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_concat_params(int argc, char **argv)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	if (!argv)
		return (NULL);
	len = ft_len_characters_of_vector(argc, argv) + argc + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	while ((int)i < argc && argv[i])
	{
		if (i == 0)
			ft_strcpy(ptr, argv[i]);
		else
			ft_strcat(ptr, argv[i]);
		ft_strcat(ptr, "\n");
		i++;
	}
	ptr[ft_strlen(ptr)] = '\0';
	return (ptr);
}
