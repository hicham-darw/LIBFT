char	*ft_strstr(const char *haystack, const char *needle)
{
	char			*tmp;
	unsigned int	i;
	unsigned int	j;

	if (!haystack || !needle)
		return (0);
	if (*needle == '\0')
	{
		tmp = (char *)haystack;
		return (tmp);
	}
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
		{
			tmp = (char *)(haystack + i);
			return (tmp);
		}
		i++;
	}
	return (0);
}
