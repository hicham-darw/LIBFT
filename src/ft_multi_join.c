#include "libft.h"
#include <stdarg.h>

static size_t	len_buffer(va_list list, int count)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while(i < count)
	{
		ret += ft_strlen(va_arg(list, char *));
		i++;
	}
	return (ret);
}

char	*ft_multi_join(int count, ...)
{
	int		i;
	size_t	len;
	char	*ptr;
	va_list	list;
	va_list	tmp_list;

	va_start(list, count);
	va_copy(tmp_list, list);
	len = len_buffer(tmp_list, count);
	ptr = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len);
	i = 0;
	while (i < count)
	{
		ft_strcat(ptr, va_arg(list, char *));
		i++;
	}
	return (ptr);
}
