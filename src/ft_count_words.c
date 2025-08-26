static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_count_words(char *str)
{
	int	i;
	int	count;

	if (!str)
		return (0);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_isspace(str[i]))
		{
			count += 1;
			while (ft_isspace(str[i]) == 1 && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}
