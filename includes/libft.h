#ifndef	LIBFT_H
#define	LIBFT_H
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

typedef	struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(char *str);
void	ft_memdel(void **ap);

#endif
