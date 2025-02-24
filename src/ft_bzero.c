#include	<string.h>

void	ft_bzero(void *restrict str, size_t n)
{
	char *tmp;
	size_t i;

	tmp = (char*)str;
	i = 0;
	while(i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}
