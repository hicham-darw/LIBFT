#include <stddef.h>

size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n *= (-1);
		len = 1;
	}
	if (n >= 0 && n <= 9)
		return (1);
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}
