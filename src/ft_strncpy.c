#include	<stddef.h>

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	size_t i;
	
	if(src == NULL)
		return NULL;
	i  = 0;
	while( i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (dst);
}
