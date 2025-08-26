#include <stdlib.h>

static int	ft_isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*empty_str(void)
{
	char	*ptr;

	ptr = (char *)malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

static char	*ft_strdup(char const *str)
{
	char	*ptr;
	int		len_s;
	int		i;

	len_s = 0;
	while (str[len_s])
		len_s++;
	ptr = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		last;
	int		i;

	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	last = (int)ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_isset(set, s1[start]))
		start++;
	while ((last - 1) >= start && ft_isset(set, s1[last - 1]))
		last--;
	if (start >= last)
		return (empty_str());
	ptr = (char *)malloc(sizeof(char) * ((last - start) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[start] && start < last)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
