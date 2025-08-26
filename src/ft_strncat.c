#include <stddef.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	len_dest;
	size_t	i;

	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	i = 0;
	while (src[i] && i < n)
	{
		dest[i + len_dest] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (dest);
}
