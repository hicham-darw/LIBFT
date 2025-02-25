#include	<string.h>

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	char *tmp_str1, *tmp_str2;
	int i , res;

	tmp_str1 = (char*)str1;
	tmp_str2 = (char*)str2;
	i = (int)n-1;
	res = 0;
	while(i >= 0)
	{
		res = res + tmp_str1[i] - tmp_str2[i];
		i--;
	}
	
	return res;
}
