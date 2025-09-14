char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = tmp;
		i++;
	}
	return (str);
}
