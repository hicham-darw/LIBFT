#include <stddef.h>

size_t	ft_nbrlen(int n)
{
	size_t	len;
	unsigned int	nbr;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		nbr = -n;
		len = 1;
	}
	else
		nbr = n;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}
