#include <stdlib.h>

static char	*empty_str(void)
{
	char	*ptr;

	ptr = (char *)malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_src;
	size_t	i;

	if (!s)
		return (NULL);
	len_src = 0;
	while (s[len_src])
		len_src++;
	if (start >= len_src)
		return (empty_str());
	if ((len_src - start) < len)
		ptr = (char *)malloc(sizeof(char) * (len_src - start) + 1);
	else
		ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (s[start] && i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
