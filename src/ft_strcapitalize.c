static char	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

static char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	if (!str)
		return (0);
	if ((str[0] >= 'a' && str[0] <= 'z'))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (ft_isalpha(str[i - 1]) || ft_isdigit(str[i - 1]))
			str[i] = ft_tolower(str[i]);
		else
			str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
