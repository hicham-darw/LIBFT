#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char	*big;

	big = (char *)haystack;
	if (*needle == '\0')
		return (big);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] && needle[j] && (i + j) < n
			&& big[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (big + i);
		i++;
	}
	return (0);
}
