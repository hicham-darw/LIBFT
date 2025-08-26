#include <stdlib.h>

static size_t	ft_strlen(char const *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	len_s1;
	unsigned int	len_s2;
	unsigned int	i;
	unsigned int	j;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
