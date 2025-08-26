#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;

	len_src = 0;
	while (src[len_src])
		len_src++;
	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	if (len_dest >= size)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dest + i) < (size - 1))
	{
		dest[i + len_dest] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (len_dest + len_src);
}
