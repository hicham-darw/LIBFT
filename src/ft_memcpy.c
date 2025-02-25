void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char *tmp_dest, *tmp_src ;
	size_t i;
	
	tmp_dest = (char*)dest;
	tmp_src = (char*)src;
	i = 0;
	while(i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	
	return dest;
}
