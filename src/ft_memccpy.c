#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	while (i < n && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = s[i];
	if (s[i] == (unsigned char)c)
		return ((void *)(dest + i + 1));
	return (0);
}
