#include <stdlib.h>

static size_t	nbrlen(int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i += 1;
	while (n)
	{
		i += 1;
		n /= 10;
	}
	return (i);
}

static int	absolute(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	len = nbrlen(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
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
		ptr[len - 1] = absolute(n % 10) + 48;
		len--;
		n /= 10;
	}
	return (ptr);
}
