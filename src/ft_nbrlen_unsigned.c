#include <stddef.h>
#include <stdio.h>

size_t	ft_nbrlen_unsigned(unsigned int  n)
{
	size_t			len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	printf("%ld\n", len);
	return (len);
}
