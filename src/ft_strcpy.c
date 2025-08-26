char	*ft_strcpy(char *dest, char const *src)
{
	int	i;

	if (!src || !dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
