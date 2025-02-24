#include	<string.h>

void	*ft_memccpy(void *restrict dest, void *restrict src, int c, size_t n)
{
	char *tmp_d, *tmp_s;
	size_t i ;

	tmp_d = (char*)dest;
	tmp_s = (char*)src;
	
	i = 0;
	while(i < n)
	{
		tmp_d[i] = tmp_s[i];
		if(tmp_s[i] == (unsigned char)c)
			return tmp_d+i+1;
		i++;
	}
	return NULL;
}

