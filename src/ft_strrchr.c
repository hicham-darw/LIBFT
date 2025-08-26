char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*tmp;

	p = (char *)s;
	tmp = 0;
	while (*p)
	{
		if (*p == c)
			tmp = p;
		p++;
	}
	if (*p == c)
		tmp = p;
	return (tmp);
}
