#include	<string.h>

void	*ft_memcpy(void *restrict dest, void *restrict src, size_t n)
{
	char *tmp_dest, *tmp_src ;
	size_t i;
	
	if( !dest || !src)
		return NULL;	
	tmp_dest = (char*)dest;
	tmp_src = (char*)src;
	
	if(&src < &dest)
	{
		i = 0;
		while(i < n )
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while( n >= 0 )
		{
			tmp_dest[n-1] = tmp_src[n-1];
			n--;
		}	
	}
	return dest;
}
