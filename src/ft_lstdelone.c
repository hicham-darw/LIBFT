/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhahicham <hachemdarwin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by elhahicham        #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by elhahicham       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content, size_t size);

void	ft_lstdelone(t_list **alst, void (*del)(void *content, size_t size))
{
	if (!alst || !del)
		return ;
	del ((*alst)->content, ft_strlen((char *)(*alst)->content));
	free(*alst);
	(*alst) = NULL;
}

void	del(void *content, size_t size)
{
	if (!content)
		return ;
	(void)size;
	ft_memdel(&content);
}
