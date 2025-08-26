#include <stdlib.h>

char	*ft_strndup(char *str, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
