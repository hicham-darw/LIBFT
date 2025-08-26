#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*tmp_s;

	tmp_s = (char *)str;
	i = 0;
	while (i < n)
		tmp_s[i++] = c;
	return (str);
}
