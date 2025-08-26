#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest || !src || dest == src)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	if (s < d)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*(d++) = *(s++);
	}
	return (dest);
}
