#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		*(range) = NULL;
		return (0);
	}
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (!ptr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	(*range) = ptr;
	return (i);
}
