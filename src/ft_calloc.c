#include <stdlib.h>

void	*ft_calloc(size_t n_bytes, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(n_bytes * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (size * n_bytes))
		ptr[i++] = 0;
	return ((void *)ptr);
}
