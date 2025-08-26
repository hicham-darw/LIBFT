#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*tmp_s;

	tmp_s = (char *)str;
	i = 0;
	while (i < n)
		tmp_s[i++] = '\0';
}
