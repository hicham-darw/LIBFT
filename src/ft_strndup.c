#include "libft.h"

char	*ft_strndup(char *str, int len)
{
	char	*ptr;
	int	i;

	ptr = (char *)ft_strnew(len);
	if(!ptr)
		return NULL;
	i = 0;
	while(i < len && str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	return ptr;
}
