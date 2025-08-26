#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	len_src;

	if (!s)
		return (0);
	len_src = 0;
	while (s[len_src])
		len_src++;
	ptr = malloc(sizeof(char) * (len_src + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
