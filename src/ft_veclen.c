#include "libft.h"

size_t	ft_veclen(char **vec)
{
	size_t i;
	
	i = 0;
	while(vec[i])
		i++;
	return i;
}
