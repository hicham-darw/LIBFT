#include <stddef.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= n)
		dst[i++] = '\0';
	return (dst);
}
