#include <stdlib.h>

static unsigned int	ft_longlen(long n)
{
	unsigned int	len;	
	long long	nbr;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len += 1;
		nbr = -n;
	}
	else
		nbr = n;
	while (nbr)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}

char	*ft_ltoa(long n)
{
	char	*ptr;
	unsigned int	len;

	len = ft_longlen(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	if (n == 0)
	{
		ptr[0] = 48;
		return (ptr);
	}
	if (n < 0)
		ptr[0] = '-';
	while (n)
	{
		if (n < 0)
			ptr[--len] = (-n % 10) + 48;
		else
			ptr[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}
